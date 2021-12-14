#include <stdio.h>

void main() {
  int *p;
  int c = 0;
  p = &c;
  c = 1;
  printf("p=c -> %d=%d", *p, c);
}