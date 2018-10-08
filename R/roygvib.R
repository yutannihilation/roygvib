#' @useDynLib roygvib, .registration = TRUE
#' @importFrom Rcpp sourceCpp
NULL

#' @export
add <- function(a, b) {
  .Call("add_impl", a, b)
}
