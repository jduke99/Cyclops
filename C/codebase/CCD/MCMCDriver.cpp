/*
 * MCMCDriver.cpp
 *
 *  Created on: Aug 6, 2012
 *      Author: trevorshaddox
 */


#include <iostream>
#include <iomanip>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include <time.h>

#include <Eigen/Dense>
#include <Eigen/Cholesky>
#include "MCMCDriver.h"
#include "MHRatio.h"
#include "IndependenceSampler.h"
#include "SigmaSampler.h"
#include "CredibleIntervals.h"
#include "Parameter.h"
#include "ModelLikelihood.h"

#include <boost/random.hpp>

//#define Debug_TRS

namespace bsccs {


MCMCDriver::MCMCDriver(InputReader * inReader): reader(inReader) {
	maxIterations = 500;
	nBetaSamples = 0;
	nSigmaSquaredSamples = 0;
	acceptanceTuningParameter = 0; // exp(acceptanceTuningParameter) modifies
	acceptanceRatioTarget = 0.25;
}

void MCMCDriver::initializeHessian() {

	for (int i = 0; i < J; i ++){
		vector<bsccs::real> columnInHessian(J,0);
		hessian.push_back(columnInHessian);
	}
}

void MCMCDriver::clearHessian() {

	for (int i = 0; i < J; i ++){
		for (int j = 0; j < J; j++) {
			hessian[j][i] = 0;
		}
	}
}

MCMCDriver::~MCMCDriver() {

}

void MCMCDriver::drive(
		CyclicCoordinateDescent& ccd, double betaAmount) {

	cout << "double = " << betaAmount << endl;

	// Select First Beta vector = modes from ccd
	J = ccd.getBetaSize();
	Parameter Beta_Hat(ccd.hBeta, J);

	Beta_Hat.logParameter();

	// Set up Beta
	Parameter Beta(ccd.hBeta, J);
	Beta.logParameter();
	Beta.setProbabilityUpdate(betaAmount);
	Beta.store();

	// Set up Sigma squared
	bsccs::real sigma2Start;
	sigma2Start = (bsccs::real) ccd.sigma2Beta;
	Parameter SigmaSquared(&sigma2Start, 1);
	SigmaSquared.logParameter();

	ccd.setUpHessianComponents();
	initializeHessian();

	double loglike = ccd.getLogLikelihood();

	ccd.getHessian(&hessian);

	ccd.computeXBeta_GPU_TRS_initialize();

	generateCholesky();


	////////////////////  GPU Test CODE /////////////////
	/*
	ccd.resetBeta();
	vector<double> betaTest;
	for (int i = 0; i < 3; i ++) {
		betaTest.push_back(2.00);
	}

	ccd.setBeta(betaTest);

	double loglike2 = ccd.getLogLikelihood();

	cout << "loglike = " << loglike << endl;
	cout << "loglike2 = " << loglike2 << endl;
*/
	///////////////////                 /////////////////

	// Generate the tools for the MH loop
	IndependenceSampler sampler;

	//Set Boost rng
	boost::mt19937 rng;

	int getBeta = 0;
	int getSigma = 0;
	int numberAcceptances = 0;
	MCMCResults_SigmaSquared.push_back(SigmaSquared.returnCurrentValues()[0]);
	MCMCResults_BetaVectors.push_back(Beta.returnCurrentValues());

	//MCMC Loop
	for (int iterations = 0; iterations < maxIterations; iterations ++) {

		static boost::uniform_01<boost::mt19937> zeroone(rng);
		cout << "iterations = " << iterations << endl;
		// Sample from a uniform distribution
		double uniformRandom = zeroone();


		//Select a sample beta vector
		if (Beta.getProbabilityUpdate() > uniformRandom) {
			getBeta ++;
			sampler.sample(&Beta_Hat, &Beta, rng, acceptanceTuningParameter,  CholDecom);
			cout << "acceptanceTuningParameter = " <<  acceptanceTuningParameter << endl;
			//Compute the acceptance ratio, and decide if Beta and sigma should be changed
			MHRatio MHstep;
			MHstep.evaluate(&Beta, &SigmaSquared, ccd, rng);

			MCMCResults_BetaVectors.push_back(Beta.returnCurrentValues());
			nBetaSamples ++;

			if (Beta.getChangeStatus()){
				numberAcceptances ++;
			}

		}

		if (Beta.getProbabilityUpdate() < uniformRandom) {
			getSigma ++;
			SigmaSampler sigmaMaker;
			sigmaMaker.sampleSigma(&SigmaSquared, &Beta, rng);

			MCMCResults_SigmaSquared.push_back(SigmaSquared.returnCurrentValues()[0]);
			nSigmaSquaredSamples ++;

			// TODO Need Wrapper for this....
			ccd.resetBeta();
			ccd.setHyperprior(SigmaSquared.get(0));
			int ZHANG_OLES = 1;
			int ccdIterations = 100;
			double tolerance = 5E-4;

			ccd.update(ccdIterations, ZHANG_OLES, tolerance);
			clearHessian();
			ccd.getHessian(&hessian);
			generateCholesky();
			Beta_Hat.set(ccd.hBeta);
		}


		adaptiveKernel(iterations+1, numberAcceptances);

		// End MCMC loop
	}

		cout << "getBeta = " << getBeta << endl;
		cout << "getSigma = " << getSigma << endl;
		cout << "number of acceptances = " << numberAcceptances << endl;
		cout << "Starting Credible Intervals" << endl;

		cout << "at End, nBetaSamples = " << nBetaSamples << endl;
		cout << "at End, nSigmaSquaredSamples = " << nSigmaSquaredSamples << endl;

		CredibleIntervals intervalsToReport;
		intervalsToReport.computeCredibleIntervals(&MCMCResults_BetaVectors, &MCMCResults_SigmaSquared, Beta.getProbabilityUpdate(), SigmaSquared.getProbabilityUpdate());


}

void MCMCDriver::adaptiveKernel(int numberIterations, int numberAcceptances) {
	acceptanceTuningParameter = acceptanceTuningParameter + (1/(1+sqrt(numberIterations)))*((double) numberAcceptances/numberIterations - acceptanceRatioTarget);
}

void MCMCDriver::generateCholesky() {
	Eigen::MatrixXf HessianMatrix(J, J);
	Eigen::MatrixXf CholeskyDecompL(J, J);

	//Convert to Eigen for Cholesky decomposition
	for (int i = 0; i < J; i++) {
		for (int j = 0; j < J; j++) {
			HessianMatrix(i, j) = -hessian[i][j];
		}
	}

	//Perform Cholesky Decomposition
	Eigen::LLT<Eigen::MatrixXf> CholDecomTest(HessianMatrix);

	CholDecom.compute(HessianMatrix);

	CholeskyDecompL = CholDecom.matrixL();

/*
	cout << "Printing Cholesky" << endl;

	for (int i = 0; i < J; i ++) {
		cout << "[";
			for (int j = 0; j < J; j++) {
				cout << CholeskyDecompL(i,j) << ", ";
			}
		cout << "]" << endl;
		}
*/
}

}