#include "calculation.h"
#include <math.h>
#include <stdio.h>

void math_functions() {
  // Math library
  printf("Square Root of 900.0 : %.2f\n", sqrt(900.0));
  printf("Cube Root of 27.0 : %.2f\n", cbrt(27.0));
  printf("Exponential function e to the 2 : %.6f\n", exp(2.0));
  printf("Natural logarithm of e : %.2f\n", log(2.718282));
  printf("Absolute value of -13.5 : %.2f\n", fabs(-13.5));
  printf("Rounds 9.2 to the smallest integer not less than 9.2 : %.2f\n",
         ceil(9.2));
  printf("Rounds -9.8 to the largest integer not greater than -9.8 : %.2f\n",
         floor(9.2));
  printf("9 raised to power 5 : %.2f\n", pow(9, 5));
  printf("Remainder of 13.657 / 2.345 : %.3f\n", fmod(13.657, 2.345));
  printf("Trigonometric sine of 0.0 : %.1f\n", sin(0.0));
  printf("Trigonometric cosine of 0.0 : %.1f\n", cos(0.0));
  printf("Trigonometric tangent of 0.0 : %.1f\n", tan(0.0));
}
