#include <stdio.h>

int main() {
  int a = 10;
  int* p;
  p = &a;
  printf("Address p is %p\n", p);
  // operation on pointers are scaled based on data type . I.e how much mem is
  // allocated.
  printf("Size of integer is %ld bytes \n", sizeof(int));
  printf("Address of p + 1 is %p\n", p + 1);
  // danger. Pointer arithmetic can reach many addresses leading to unwated
  // behaviour. rnd val
  printf("Value of p + 1 is %d\n", *(p + 1));
  return 0;
}