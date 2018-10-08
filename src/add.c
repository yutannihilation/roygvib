// taken from http://adv-r.had.co.nz/C-interface.html#calling-c

#include "./roygvib.h"

SEXP add_impl(SEXP a, SEXP b) {
  SEXP result = PROTECT(allocVector(REALSXP, 1));
  REAL(result)[0] = asReal(a) + asReal(b);
  UNPROTECT(1);

  return result;
}
