#include <stdio.h>

int main() {
  float x, y;
  float* z;
  y = 10.0;
  z = &y;
  // x is the value pointed to by z
  x = *z;
  printf("The value of x,y is  %f,%f\n", x, y);
  // pointer changes, x remains cuz it's not storing a ref rather a value
  *z = 9;
  printf("The value of y,x is %f,%f\n", y, x);

  return 0;
}