#include <errno.h>
#include <fenv.h>
#include <math.h>
#include <stdio.h>

#pragma STDC FENV_ACCESS ON

int main() {
  float x = 5;
  // Fails cuz of undefined behaviour
  double k = powf(x, 2);
  double j = 100;
  //   Fails cuz of undefined behaviour
  double h = sqrt(j);
  printf("Square of %f is %f\n", x, k);
  printf("The square root of %f is %f\n", j, h);
}
