// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// cyclopsSetBeta
void cyclopsSetBeta(SEXP inRcppCcdInterface, int beta, double value);
RcppExport SEXP cyclops_cyclopsSetBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< double >::type value(valueSEXP );
        cyclopsSetBeta(inRcppCcdInterface, beta, value);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsSetFixedBeta
void cyclopsSetFixedBeta(SEXP inRcppCcdInterface, int beta, bool fixed);
RcppExport SEXP cyclops_cyclopsSetFixedBeta(SEXP inRcppCcdInterfaceSEXP, SEXP betaSEXP, SEXP fixedSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< bool >::type fixed(fixedSEXP );
        cyclopsSetFixedBeta(inRcppCcdInterface, beta, fixed);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsGetIsRegularized
bool cyclopsGetIsRegularized(SEXP inRcppCcdInterface, const int index);
RcppExport SEXP cyclops_cyclopsGetIsRegularized(SEXP inRcppCcdInterfaceSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< const int >::type index(indexSEXP );
        bool __result = cyclopsGetIsRegularized(inRcppCcdInterface, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetLogLikelihood
double cyclopsGetLogLikelihood(SEXP inRcppCcdInterface);
RcppExport SEXP cyclops_cyclopsGetLogLikelihood(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        double __result = cyclopsGetLogLikelihood(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetFisherInformation
Eigen::MatrixXd cyclopsGetFisherInformation(SEXP inRcppCcdInterface, const SEXP sexpCovariates);
RcppExport SEXP cyclops_cyclopsGetFisherInformation(SEXP inRcppCcdInterfaceSEXP, SEXP sexpCovariatesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< const SEXP >::type sexpCovariates(sexpCovariatesSEXP );
        Eigen::MatrixXd __result = cyclopsGetFisherInformation(inRcppCcdInterface, sexpCovariates);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSetPrior
void cyclopsSetPrior(SEXP inRcppCcdInterface, const std::string& priorTypeName, double variance, SEXP excludeNumeric);
RcppExport SEXP cyclops_cyclopsSetPrior(SEXP inRcppCcdInterfaceSEXP, SEXP priorTypeNameSEXP, SEXP varianceSEXP, SEXP excludeNumericSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type priorTypeName(priorTypeNameSEXP );
        Rcpp::traits::input_parameter< double >::type variance(varianceSEXP );
        Rcpp::traits::input_parameter< SEXP >::type excludeNumeric(excludeNumericSEXP );
        cyclopsSetPrior(inRcppCcdInterface, priorTypeName, variance, excludeNumeric);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsProfileModel
List cyclopsProfileModel(SEXP inRcppCcdInterface, SEXP sexpCovariates, double threshold, bool override);
RcppExport SEXP cyclops_cyclopsProfileModel(SEXP inRcppCcdInterfaceSEXP, SEXP sexpCovariatesSEXP, SEXP thresholdSEXP, SEXP overrideSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sexpCovariates(sexpCovariatesSEXP );
        Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP );
        Rcpp::traits::input_parameter< bool >::type override(overrideSEXP );
        List __result = cyclopsProfileModel(inRcppCcdInterface, sexpCovariates, threshold, override);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsPredictModel
List cyclopsPredictModel(SEXP inRcppCcdInterface);
RcppExport SEXP cyclops_cyclopsPredictModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = cyclopsPredictModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSetControl
void cyclopsSetControl(SEXP inRcppCcdInterface, int maxIterations, double tolerance, const std::string& convergenceType, bool useAutoSearch, int fold, int foldToCompute, double lowerLimit, double upperLimit, int gridSteps, const std::string& noiseLevel, int seed);
RcppExport SEXP cyclops_cyclopsSetControl(SEXP inRcppCcdInterfaceSEXP, SEXP maxIterationsSEXP, SEXP toleranceSEXP, SEXP convergenceTypeSEXP, SEXP useAutoSearchSEXP, SEXP foldSEXP, SEXP foldToComputeSEXP, SEXP lowerLimitSEXP, SEXP upperLimitSEXP, SEXP gridStepsSEXP, SEXP noiseLevelSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP );
        Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type convergenceType(convergenceTypeSEXP );
        Rcpp::traits::input_parameter< bool >::type useAutoSearch(useAutoSearchSEXP );
        Rcpp::traits::input_parameter< int >::type fold(foldSEXP );
        Rcpp::traits::input_parameter< int >::type foldToCompute(foldToComputeSEXP );
        Rcpp::traits::input_parameter< double >::type lowerLimit(lowerLimitSEXP );
        Rcpp::traits::input_parameter< double >::type upperLimit(upperLimitSEXP );
        Rcpp::traits::input_parameter< int >::type gridSteps(gridStepsSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type noiseLevel(noiseLevelSEXP );
        Rcpp::traits::input_parameter< int >::type seed(seedSEXP );
        cyclopsSetControl(inRcppCcdInterface, maxIterations, tolerance, convergenceType, useAutoSearch, fold, foldToCompute, lowerLimit, upperLimit, gridSteps, noiseLevel, seed);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsRunCrossValidationl
List cyclopsRunCrossValidationl(SEXP inRcppCcdInterface);
RcppExport SEXP cyclops_cyclopsRunCrossValidationl(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = cyclopsRunCrossValidationl(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsFitModel
List cyclopsFitModel(SEXP inRcppCcdInterface);
RcppExport SEXP cyclops_cyclopsFitModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = cyclopsFitModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsLogModel
List cyclopsLogModel(SEXP inRcppCcdInterface);
RcppExport SEXP cyclops_cyclopsLogModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = cyclopsLogModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsInitializeModel
List cyclopsInitializeModel(SEXP inModelData, const std::string& modelType, bool computeMLE = false);
RcppExport SEXP cyclops_cyclopsInitializeModel(SEXP inModelDataSEXP, SEXP modelTypeSEXP, SEXP computeMLESEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inModelData(inModelDataSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelType(modelTypeSEXP );
        Rcpp::traits::input_parameter< bool >::type computeMLE(computeMLESEXP );
        List __result = cyclopsInitializeModel(inModelData, modelType, computeMLE);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsPrintRowIds
void cyclopsPrintRowIds(Environment object);
RcppExport SEXP cyclops_cyclopsPrintRowIds(SEXP objectSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        cyclopsPrintRowIds(object);
    }
    return R_NilValue;
END_RCPP
}
// isRcppPtrNull
bool isRcppPtrNull(SEXP x);
RcppExport SEXP cyclops_isRcppPtrNull(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        bool __result = isRcppPtrNull(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetNumberOfStrata
int cyclopsGetNumberOfStrata(Environment object);
RcppExport SEXP cyclops_cyclopsGetNumberOfStrata(SEXP objectSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        int __result = cyclopsGetNumberOfStrata(object);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetCovariateIds
std::vector<int64_t> cyclopsGetCovariateIds(Environment object);
RcppExport SEXP cyclops_cyclopsGetCovariateIds(SEXP objectSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        std::vector<int64_t> __result = cyclopsGetCovariateIds(object);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetCovariateType
CharacterVector cyclopsGetCovariateType(Environment object, const std::vector<int64_t>& covariateLabel);
RcppExport SEXP cyclops_cyclopsGetCovariateType(SEXP objectSEXP, SEXP covariateLabelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type covariateLabel(covariateLabelSEXP );
        CharacterVector __result = cyclopsGetCovariateType(object, covariateLabel);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetNumberOfColumns
int cyclopsGetNumberOfColumns(Environment object);
RcppExport SEXP cyclops_cyclopsGetNumberOfColumns(SEXP objectSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        int __result = cyclopsGetNumberOfColumns(object);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetNumberOfRows
int cyclopsGetNumberOfRows(Environment object);
RcppExport SEXP cyclops_cyclopsGetNumberOfRows(SEXP objectSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type object(objectSEXP );
        int __result = cyclopsGetNumberOfRows(object);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSumByGroup
List cyclopsSumByGroup(Environment x, const std::vector<long>& covariateLabel, const long groupByLabel, const int power);
RcppExport SEXP cyclops_cyclopsSumByGroup(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP groupByLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP );
        Rcpp::traits::input_parameter< const long >::type groupByLabel(groupByLabelSEXP );
        Rcpp::traits::input_parameter< const int >::type power(powerSEXP );
        List __result = cyclopsSumByGroup(x, covariateLabel, groupByLabel, power);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSumByStratum
List cyclopsSumByStratum(Environment x, const std::vector<long>& covariateLabel, const int power);
RcppExport SEXP cyclops_cyclopsSumByStratum(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP );
        Rcpp::traits::input_parameter< const int >::type power(powerSEXP );
        List __result = cyclopsSumByStratum(x, covariateLabel, power);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSum
std::vector<double> cyclopsSum(Environment x, const std::vector<long>& covariateLabel, const int power);
RcppExport SEXP cyclops_cyclopsSum(SEXP xSEXP, SEXP covariateLabelSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<long>& >::type covariateLabel(covariateLabelSEXP );
        Rcpp::traits::input_parameter< const int >::type power(powerSEXP );
        std::vector<double> __result = cyclopsSum(x, covariateLabel, power);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsNewSqlData
List cyclopsNewSqlData(const std::string& modelTypeName, const std::string& noiseLevel);
RcppExport SEXP cyclops_cyclopsNewSqlData(SEXP modelTypeNameSEXP, SEXP noiseLevelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type noiseLevel(noiseLevelSEXP );
        List __result = cyclopsNewSqlData(modelTypeName, noiseLevel);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsSetHasIntercept
void cyclopsSetHasIntercept(Environment x, bool hasIntercept);
RcppExport SEXP cyclops_cyclopsSetHasIntercept(SEXP xSEXP, SEXP hasInterceptSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< bool >::type hasIntercept(hasInterceptSEXP );
        cyclopsSetHasIntercept(x, hasIntercept);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsGetHasIntercept
bool cyclopsGetHasIntercept(Environment x);
RcppExport SEXP cyclops_cyclopsGetHasIntercept(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        bool __result = cyclopsGetHasIntercept(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsFinalizeData
void cyclopsFinalizeData(Environment x, bool addIntercept, SEXP sexpOffsetCovariate, bool offsetAlreadyOnLogScale, bool sortCovariates, SEXP sexpCovariatesDense, bool magicFlag = false);
RcppExport SEXP cyclops_cyclopsFinalizeData(SEXP xSEXP, SEXP addInterceptSEXP, SEXP sexpOffsetCovariateSEXP, SEXP offsetAlreadyOnLogScaleSEXP, SEXP sortCovariatesSEXP, SEXP sexpCovariatesDenseSEXP, SEXP magicFlagSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< bool >::type addIntercept(addInterceptSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sexpOffsetCovariate(sexpOffsetCovariateSEXP );
        Rcpp::traits::input_parameter< bool >::type offsetAlreadyOnLogScale(offsetAlreadyOnLogScaleSEXP );
        Rcpp::traits::input_parameter< bool >::type sortCovariates(sortCovariatesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sexpCovariatesDense(sexpCovariatesDenseSEXP );
        Rcpp::traits::input_parameter< bool >::type magicFlag(magicFlagSEXP );
        cyclopsFinalizeData(x, addIntercept, sexpOffsetCovariate, offsetAlreadyOnLogScale, sortCovariates, sexpCovariatesDense, magicFlag);
    }
    return R_NilValue;
END_RCPP
}
// cyclopsAppendSqlData
int cyclopsAppendSqlData(Environment x, const std::vector<int64_t>& oStratumId, const std::vector<int64_t>& oRowId, const std::vector<double>& oY, const std::vector<double>& oTime, const std::vector<int64_t>& cRowId, const std::vector<int64_t>& cCovariateId, const std::vector<double>& cCovariateValue);
RcppExport SEXP cyclops_cyclopsAppendSqlData(SEXP xSEXP, SEXP oStratumIdSEXP, SEXP oRowIdSEXP, SEXP oYSEXP, SEXP oTimeSEXP, SEXP cRowIdSEXP, SEXP cCovariateIdSEXP, SEXP cCovariateValueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type oStratumId(oStratumIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type oRowId(oRowIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type oY(oYSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type oTime(oTimeSEXP );
        Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type cRowId(cRowIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<int64_t>& >::type cCovariateId(cCovariateIdSEXP );
        Rcpp::traits::input_parameter< const std::vector<double>& >::type cCovariateValue(cCovariateValueSEXP );
        int __result = cyclopsAppendSqlData(x, oStratumId, oRowId, oY, oTime, cRowId, cCovariateId, cCovariateValue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsGetInterceptLabel
SEXP cyclopsGetInterceptLabel(Environment x);
RcppExport SEXP cyclops_cyclopsGetInterceptLabel(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        SEXP __result = cyclopsGetInterceptLabel(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsReadFileData
List cyclopsReadFileData(const std::string& fileName, const std::string& modelTypeName);
RcppExport SEXP cyclops_cyclopsReadFileData(SEXP fileNameSEXP, SEXP modelTypeNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        List __result = cyclopsReadFileData(fileName, modelTypeName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cyclopsModelData
List cyclopsModelData(SEXP pid, SEXP y, SEXP z, SEXP offs, SEXP dx, SEXP sx, SEXP ix, const std::string& modelTypeName, bool useTimeAsOffset = false);
RcppExport SEXP cyclops_cyclopsModelData(SEXP pidSEXP, SEXP ySEXP, SEXP zSEXP, SEXP offsSEXP, SEXP dxSEXP, SEXP sxSEXP, SEXP ixSEXP, SEXP modelTypeNameSEXP, SEXP useTimeAsOffsetSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type pid(pidSEXP );
        Rcpp::traits::input_parameter< SEXP >::type y(ySEXP );
        Rcpp::traits::input_parameter< SEXP >::type z(zSEXP );
        Rcpp::traits::input_parameter< SEXP >::type offs(offsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type dx(dxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sx(sxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ix(ixSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        Rcpp::traits::input_parameter< bool >::type useTimeAsOffset(useTimeAsOffsetSEXP );
        List __result = cyclopsModelData(pid, y, z, offs, dx, sx, ix, modelTypeName, useTimeAsOffset);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
