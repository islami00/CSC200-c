#include <stdio.h>

int main() {
  int v1 = 10, v2 = 30;
  float result;
  // implicit typecasting, but maybe one would need explicit. This is explicit!!
  float result1 = (float)v2 / (v1 + 1);  // like 1u32 of rust. But more verbose
  // This isn't implicit. int/int is int. float though...
  float impl = v2 / (v1 + 1);
  // Future islam with float typecast
  float tcast = 30;
  float trueimpl = tcast / (v1 + 1);
  //   Does it work the other way?
  float opImpl = (v1 + 1) / tcast;  // Yes!!. Two conditions confirmed.

  //   Explicit on left.
  result = (float)v1 / (v2 + 1);
  printf("Should result , but explicit %f\n", result);
  printf("explicit on top: %f\n", result1);
  printf("Implicit typecasting gives: %f\n", impl);
  printf("True implicit %f\n", trueimpl);
  printf("True implicit with vars switched %f\n", opImpl);
  //   I thereby conclude:
  // For implict typecasting:  f = f/i . f =  i/f. i = i/i.
}
// room 132 or 123 or 129. One on the right and the other on the left.
// the one on the left is where we headed