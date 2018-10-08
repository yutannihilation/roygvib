#include "./roygvib.h"

#include <R_ext/Rdynload.h>

extern SEXP add_impl(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"add_impl", (DL_FUNC) &add_impl, 2},
  {NULL, NULL, 0}
};

void R_init_roygvib(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
