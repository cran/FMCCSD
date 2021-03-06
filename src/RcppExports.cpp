// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// likelihoodi
double likelihoodi(const double& b, const arma::vec& parameters, const arma::vec& Delta, const arma::mat& X, const arma::vec& Z, const int& ni, const double& r, const arma::mat& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_likelihoodi(SEXP bSEXP, SEXP parametersSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodi(b, parameters, Delta, X, Z, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// weightfunction
arma::mat weightfunction(const arma::vec& parameters, const arma::mat& rules, const arma::field<arma::vec>& Delta, const arma::field<arma::vec>& X, const arma::mat& Z, const int& n, const arma::vec& ni, const double& r, const arma::field<arma::mat>& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_weightfunction(SEXP parametersSEXP, SEXP rulesSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP nSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rules(rulesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(weightfunction(parameters, rules, Delta, X, Z, n, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// MMfunctioni
double MMfunctioni(const double& b, const arma::vec& parameters, const arma::vec& lastpar, const arma::vec& Delta, const arma::mat& X, const arma::vec& Z, const int& ni, const double& r, const arma::mat& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_MMfunctioni(SEXP bSEXP, SEXP parametersSEXP, SEXP lastparSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lastpar(lastparSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(MMfunctioni(b, parameters, lastpar, Delta, X, Z, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// targetfunc
double targetfunc(const arma::vec& parameters, const arma::vec& lastpar, const arma::mat& rules, const arma::field<arma::vec>& C, const arma::field<arma::vec>& Delta, const arma::field<arma::vec>& X, const arma::mat& Z, const int& n, const arma::vec& ni, const double& r, const arma::field<arma::mat>& blC, const int& betadim, const int& gammadim, const arma::mat& R, const double& lambda);
RcppExport SEXP _FMCCSD_targetfunc(SEXP parametersSEXP, SEXP lastparSEXP, SEXP rulesSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP nSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP, SEXP RSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lastpar(lastparSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rules(rulesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(targetfunc(parameters, lastpar, rules, C, Delta, X, Z, n, ni, r, blC, betadim, gammadim, R, lambda));
    return rcpp_result_gen;
END_RCPP
}
// MMfunctioninofrailty
double MMfunctioninofrailty(const double& b, const arma::vec& parameters, const arma::vec& lastpar, const arma::vec& Delta, const arma::mat& X, const arma::vec& Z, const int& ni, const double& r, const arma::mat& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_MMfunctioninofrailty(SEXP bSEXP, SEXP parametersSEXP, SEXP lastparSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lastpar(lastparSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(MMfunctioninofrailty(b, parameters, lastpar, Delta, X, Z, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// targetfuncfrailty
double targetfuncfrailty(const arma::vec& parameters, const arma::vec& lastpar, const arma::mat& rules, const arma::field<arma::vec>& C, const arma::field<arma::vec>& Delta, const arma::field<arma::vec>& X, const arma::mat& Z, const int& n, const arma::vec& ni, const double& r, const arma::field<arma::mat>& blC, const int& betadim, const int& gammadim, const arma::mat& R, const double& lambda);
RcppExport SEXP _FMCCSD_targetfuncfrailty(SEXP parametersSEXP, SEXP lastparSEXP, SEXP rulesSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP nSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP, SEXP RSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lastpar(lastparSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rules(rulesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(targetfuncfrailty(parameters, lastpar, rules, C, Delta, X, Z, n, ni, r, blC, betadim, gammadim, R, lambda));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodfunc1current
double likelihoodfunc1current(const double& b, const arma::vec& parameters, const arma::vec& C, const arma::vec& Delta, const arma::mat& X, const arma::vec& Z, const int& ni, const double& r, const arma::mat& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_likelihoodfunc1current(SEXP bSEXP, SEXP parametersSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodfunc1current(b, parameters, C, Delta, X, Z, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// testquadrature1current
double testquadrature1current(const arma::vec& parameters, const arma::mat& rules, const arma::field<arma::vec>& C, const arma::field<arma::vec>& Delta, const arma::field<arma::vec>& X, const arma::mat& Z, const int& n, const arma::vec& ni, const double& r, const arma::field<arma::mat>& blC, const int& betadim, const int& gammadim, const arma::mat& R, const double& lambda);
RcppExport SEXP _FMCCSD_testquadrature1current(SEXP parametersSEXP, SEXP rulesSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP nSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP, SEXP RSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rules(rulesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(testquadrature1current(parameters, rules, C, Delta, X, Z, n, ni, r, blC, betadim, gammadim, R, lambda));
    return rcpp_result_gen;
END_RCPP
}
// penaltyterm
double penaltyterm(const arma::vec& psi, const double& lambda, const arma::mat& R);
RcppExport SEXP _FMCCSD_penaltyterm(SEXP psiSEXP, SEXP lambdaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(penaltyterm(psi, lambda, R));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodfunc1currentnofrailty
double likelihoodfunc1currentnofrailty(const double& b, const arma::vec& parameters, const arma::vec& C, const arma::vec& Delta, const arma::mat& X, const arma::vec& Z, const int& ni, const double& r, const arma::mat& blC, const int& betadim, const int& gammadim);
RcppExport SEXP _FMCCSD_likelihoodfunc1currentnofrailty(SEXP bSEXP, SEXP parametersSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodfunc1currentnofrailty(b, parameters, C, Delta, X, Z, ni, r, blC, betadim, gammadim));
    return rcpp_result_gen;
END_RCPP
}
// testquadrature1currentnofrailty
double testquadrature1currentnofrailty(const arma::vec& parameters, const arma::mat& rules, const arma::field<arma::vec>& C, const arma::field<arma::vec>& Delta, const arma::field<arma::vec>& X, const arma::mat& Z, const int& n, const arma::vec& ni, const double& r, const arma::field<arma::mat>& blC, const int& betadim, const int& gammadim, const arma::mat& R, const double& lambda);
RcppExport SEXP _FMCCSD_testquadrature1currentnofrailty(SEXP parametersSEXP, SEXP rulesSEXP, SEXP CSEXP, SEXP DeltaSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP nSEXP, SEXP niSEXP, SEXP rSEXP, SEXP blCSEXP, SEXP betadimSEXP, SEXP gammadimSEXP, SEXP RSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rules(rulesSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ni(niSEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type blC(blCSEXP);
    Rcpp::traits::input_parameter< const int& >::type betadim(betadimSEXP);
    Rcpp::traits::input_parameter< const int& >::type gammadim(gammadimSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(testquadrature1currentnofrailty(parameters, rules, C, Delta, X, Z, n, ni, r, blC, betadim, gammadim, R, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FMCCSD_likelihoodi", (DL_FUNC) &_FMCCSD_likelihoodi, 10},
    {"_FMCCSD_weightfunction", (DL_FUNC) &_FMCCSD_weightfunction, 11},
    {"_FMCCSD_MMfunctioni", (DL_FUNC) &_FMCCSD_MMfunctioni, 11},
    {"_FMCCSD_targetfunc", (DL_FUNC) &_FMCCSD_targetfunc, 15},
    {"_FMCCSD_MMfunctioninofrailty", (DL_FUNC) &_FMCCSD_MMfunctioninofrailty, 11},
    {"_FMCCSD_targetfuncfrailty", (DL_FUNC) &_FMCCSD_targetfuncfrailty, 15},
    {"_FMCCSD_likelihoodfunc1current", (DL_FUNC) &_FMCCSD_likelihoodfunc1current, 11},
    {"_FMCCSD_testquadrature1current", (DL_FUNC) &_FMCCSD_testquadrature1current, 14},
    {"_FMCCSD_penaltyterm", (DL_FUNC) &_FMCCSD_penaltyterm, 3},
    {"_FMCCSD_likelihoodfunc1currentnofrailty", (DL_FUNC) &_FMCCSD_likelihoodfunc1currentnofrailty, 11},
    {"_FMCCSD_testquadrature1currentnofrailty", (DL_FUNC) &_FMCCSD_testquadrature1currentnofrailty, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_FMCCSD(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
