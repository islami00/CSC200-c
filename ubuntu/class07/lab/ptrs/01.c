#include <stdio.h>

int main() {
  int a[] = {10, 20, 30, 45, 67, 56, 74};
  int *p, *q;
  p = &a[1];
  q = &a[5];
  // wrong. I just switched it up
  printf("%u %d\n", q - p, *q - *p);
  // it's negative cuz of usize representation. It was negative earlier cuz I
  // switched things
  printf("p = %u and q = %u\n", p, q);
  return 0;
}