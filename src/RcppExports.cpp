// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// arma_sgemm
SEXP arma_sgemm(const arma::fmat A, const arma::fmat B);
RcppExport SEXP _gpuRbenchmark_arma_sgemm(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::fmat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::fmat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_sgemm(A, B));
    return rcpp_result_gen;
END_RCPP
}
// arma_dgemm
SEXP arma_dgemm(NumericMatrix Asexp, NumericMatrix Bsexp);
RcppExport SEXP _gpuRbenchmark_arma_dgemm(SEXP AsexpSEXP, SEXP BsexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Asexp(AsexpSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Bsexp(BsexpSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_dgemm(Asexp, Bsexp));
    return rcpp_result_gen;
END_RCPP
}
// arma_deigen
Rcpp::List arma_deigen(NumericMatrix Asexp);
RcppExport SEXP _gpuRbenchmark_arma_deigen(SEXP AsexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Asexp(AsexpSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_deigen(Asexp));
    return rcpp_result_gen;
END_RCPP
}
// arma_seigen
List arma_seigen(const arma::fmat A);
RcppExport SEXP _gpuRbenchmark_arma_seigen(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::fmat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(arma_seigen(A));
    return rcpp_result_gen;
END_RCPP
}
// eigen_sgemm
SEXP eigen_sgemm(const SEXP A_in, const SEXP B_in);
RcppExport SEXP _gpuRbenchmark_eigen_sgemm(SEXP A_inSEXP, SEXP B_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type A_in(A_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type B_in(B_inSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_sgemm(A_in, B_in));
    return rcpp_result_gen;
END_RCPP
}
// eigen_dgemm
SEXP eigen_dgemm(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map<Eigen::MatrixXd> B);
RcppExport SEXP _gpuRbenchmark_eigen_dgemm(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_dgemm(A, B));
    return rcpp_result_gen;
END_RCPP
}
// eigen_deigen
List eigen_deigen(const Eigen::Map<Eigen::MatrixXd> A);
RcppExport SEXP _gpuRbenchmark_eigen_deigen(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_deigen(A));
    return rcpp_result_gen;
END_RCPP
}
// eigen_seigen
List eigen_seigen(const SEXP A_in);
RcppExport SEXP _gpuRbenchmark_eigen_seigen(SEXP A_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type A_in(A_inSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_seigen(A_in));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gpuRbenchmark_arma_sgemm", (DL_FUNC) &_gpuRbenchmark_arma_sgemm, 2},
    {"_gpuRbenchmark_arma_dgemm", (DL_FUNC) &_gpuRbenchmark_arma_dgemm, 2},
    {"_gpuRbenchmark_arma_deigen", (DL_FUNC) &_gpuRbenchmark_arma_deigen, 1},
    {"_gpuRbenchmark_arma_seigen", (DL_FUNC) &_gpuRbenchmark_arma_seigen, 1},
    {"_gpuRbenchmark_eigen_sgemm", (DL_FUNC) &_gpuRbenchmark_eigen_sgemm, 2},
    {"_gpuRbenchmark_eigen_dgemm", (DL_FUNC) &_gpuRbenchmark_eigen_dgemm, 2},
    {"_gpuRbenchmark_eigen_deigen", (DL_FUNC) &_gpuRbenchmark_eigen_deigen, 1},
    {"_gpuRbenchmark_eigen_seigen", (DL_FUNC) &_gpuRbenchmark_eigen_seigen, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_gpuRbenchmark(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
