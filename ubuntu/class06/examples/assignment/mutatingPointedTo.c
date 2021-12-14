#include <stdio.h>
int main() {
  int *p;
  int c = 0;
  p = &c;
  c = 1;
  printf("p=c -> %d=%d", *p, c);
  *p = 2;
  printf("\n*p=2, but *p stores a reference to c so, -> %d=%d", *p, c);
  printf("\n imagine it like mutating an array in js without deep copy");
  return 0;
}