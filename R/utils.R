##' Spheroid described by effective radius and aspect ratio
##'
##' Describe a spheroid by the aspect ratio and effective radius of an equi-volume sphere
##' V = 4/3 pi rv^3 = 4/3 pi a^2 c
##' c = h * a
##' @title spheroid_ar
##' @export
##' @param rv equivolume sphere radius
##' @param h aspect ratio
##' @param type class of spheroid
##' @family user_level cda utility
##' @author baptiste Auguie
spheroid_ar <- function(rv, h, type=c("prolate","oblate")){
  type <- match.arg(type)
  if(type == "prolate"){
  a = rv * h^(-1/3)
  c = h * a
  } else if(type == "oblate"){
    a = rv * h^(-1/3)
    c = h * a
  } 
  list(a=a, b=a, c=c)
}

