#include <stdio.h>

int main() {
  // this isn't actual typing. * is like [size] as it is attached to the var.
  // Yes, confusing analogy
  int *pc, c;  // same as int *p; int c;
  c = 22;
  printf("The address of c is %p\n", &c);
  printf("The address of c is %d\n", c);

  return 0;
}