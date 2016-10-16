// VSWFs and related functions

// [[Rcpp::depends(RcppArmadillo)]]

#include <RcppArmadillo.h>
#include <iostream>

// #include "vswf.h"

using namespace Rcpp ;
using namespace RcppArmadillo ;
using namespace std;


// SSH
// Scalar Spherical Harmonics
// [[Rcpp::export]]
arma::cx_mat cpp_ssh(const double phi, const double theta, const double psi)
{
  arma::cx_mat R(3,3);
  return (R);
}

// VSH
// Vector Spherical Harmonics
// [[Rcpp::export]]
arma::cx_mat cpp_vsh(const double phi, const double theta, const double psi)
{
  arma::cx_mat R(3,3);
  return (R);
}

// VSWF
// Vector Spherical Wave Functions
// [[Rcpp::export]]
arma::cx_mat cpp_vswf(const double phi, const double theta, const double psi)
{
  arma::cx_mat R(3,3);
  return (R);
}
