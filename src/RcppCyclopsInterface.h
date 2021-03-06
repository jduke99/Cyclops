/*
 * RcppCcdInterface.h
 *
 * @author Marc Suchard
 */

#ifndef RCPP_CCD_INTERFACE_H_
#define RCPP_CCD_INTERFACE_H_

#include "CcdInterface.h"
#include "priors/JointPrior.h"

namespace bsccs {

class RcppModelData; // forward reference

class RcppCcdInterface : public CcdInterface {

public:

	RcppCcdInterface();

    RcppCcdInterface(RcppModelData& modelData);

    virtual ~RcppCcdInterface();
    
    double initializeModel() {
//    	ModelData* tmp;
    	return CcdInterface::initializeModel(&modelData, &ccd, &modelSpecifics);
    }

    double fitModel() {
    	return CcdInterface::fitModel(ccd);
    }
            
    double runFitMLEAtMode() {
    	return CcdInterface::runFitMLEAtMode(ccd);
    }

    double predictModel() {
    	return CcdInterface::predictModel(ccd, modelData);
    }

    double profileModel(const ProfileVector& profileCI, ProfileInformationMap& profileMap, 
            double threshold, bool override, bool includePenalty) {
    	return CcdInterface::profileModel(ccd, modelData, profileCI, profileMap, threshold, 
    			override, includePenalty);
    }
           
    double runCrossValidation() {
    	return CcdInterface::runCrossValidation(ccd, modelData);
    }           
        
    double runBoostrap(std::vector<double>& savedBeta) {
    	return CcdInterface::runBoostrap(ccd, modelData, savedBeta);
    }         		
    
    void setZeroBetaAsFixed() {
    	CcdInterface::setZeroBetaAsFixed(ccd);
    }            
        
    double logModel(/*ProfileInformationMap &profileMap,*/ bool withProfileBounds) {
    	return CcdInterface::logModel(ccd, modelData, profileMap, withProfileBounds);
    } 
             
    double diagnoseModel(double loadTime, double updateTime) {
    	return CcdInterface::diagnoseModel(ccd, modelData, loadTime, updateTime);
    }
    
    const Rcpp::List& getResult() const {
    	return result;
    }
        
	void setPrior(
				const std::vector<std::string>& basePriorName, 
				const std::vector<double>& baseVariance,
				const ProfileVector& flatPrior,
				const HierarchicalChildMap& map);    
				
    void setNoiseLevel(bsccs::NoiseLevels noiseLevel);				
    
    // For debug purposes
    CyclicCoordinateDescent& getCcd() { return *ccd; } 
    ModelData& getModelData() { return *modelData; }
    
    static void appendRList(Rcpp::List& list, const Rcpp::List& append);
    
    static ModelType parseModelType(const std::string& modelName);
    static priors::PriorType parsePriorType(const std::string& priorName);
    static ConvergenceType parseConvergenceType(const std::string& convergenceName);
    static NoiseLevels parseNoiseLevel(const std::string& noiseName);
                        
protected:            
		
		static void handleError(const std::string& str);
		
		priors::JointPriorPtr makePrior(
				const std::vector<std::string>& basePriorName, 
				const std::vector<double>& baseVariance,
				const ProfileVector& flatPrior,
				const HierarchicalChildMap& map);
            
    void initializeModelImpl(
            ModelData** modelData,
            CyclicCoordinateDescent** ccd,
            AbstractModelSpecifics** model);
            
    void predictModelImpl(
            CyclicCoordinateDescent *ccd,
            ModelData *modelData); 
            
    void logModelImpl(
            CyclicCoordinateDescent *ccd,
            ModelData *modelData,
            ProfileInformationMap& profileMap,
            bool withASE); 
            
     void diagnoseModelImpl(
            CyclicCoordinateDescent *ccd, 
            ModelData *modelData,	
    		double loadTime,
    		double updateTime);  

private:

			RcppModelData& rcppModelData; // TODO Make const?
			
//      Rcpp::XPtr<RcppModelData> data;
//      Rcpp::XPtr<CyclicCoordinateDescent> ccd;
//      Rcpp::XPtr<AbstractModelSpecifics> model;
	 		
	 		ModelData* modelData;
			CyclicCoordinateDescent* ccd;
			AbstractModelSpecifics* modelSpecifics;
						
			bsccs::ProfileInformationMap profileMap;
			Rcpp::List result;

}; // class RcppCcdInterface

} // namespace

#endif /* CCD_H_ */
