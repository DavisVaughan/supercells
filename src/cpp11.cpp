// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// slic.h
integers_matrix run_slic(integers_matrix m, integers_matrix vals, double step, int nc, bool con, bool type);
extern "C" SEXP _slicr_run_slic(SEXP m, SEXP vals, SEXP step, SEXP nc, SEXP con, SEXP type) {
  BEGIN_CPP11
    return cpp11::as_sexp(run_slic(cpp11::as_cpp<cpp11::decay_t<integers_matrix>>(m), cpp11::as_cpp<cpp11::decay_t<integers_matrix>>(vals), cpp11::as_cpp<cpp11::decay_t<double>>(step), cpp11::as_cpp<cpp11::decay_t<int>>(nc), cpp11::as_cpp<cpp11::decay_t<bool>>(con), cpp11::as_cpp<cpp11::decay_t<bool>>(type)));
  END_CPP11
}
// test.cpp
integers a(integers_matrix vals);
extern "C" SEXP _slicr_a(SEXP vals) {
  BEGIN_CPP11
    return cpp11::as_sexp(a(cpp11::as_cpp<cpp11::decay_t<integers_matrix>>(vals)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _slicr_a(SEXP);
extern SEXP _slicr_run_slic(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_slicr_a",        (DL_FUNC) &_slicr_a,        1},
    {"_slicr_run_slic", (DL_FUNC) &_slicr_run_slic, 6},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_slicr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
