// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fmatch
IntegerVector fmatch(std::vector< std::string > x, std::vector< std::string > y);
RcppExport SEXP fmatch_fmatch(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type y(ySEXP);
    __result = Rcpp::wrap(fmatch(x, y));
    return __result;
END_RCPP
}
