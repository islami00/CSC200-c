#include <stdio.h>

int main()

{
  float x, y;
  float* z;
  y = 10.0;
  z = &y;
  x = *z;
  printf("x = %1$f", x);
  // equivalent of x =  y;
  return 0;
}