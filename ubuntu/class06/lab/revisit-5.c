#include <stdio.h>

int main() {
  int a[] = {2, 4, 5, 8, 1};
  printf("addr type 1 %p\n", a);   // %d,%u,%i all fly
  printf("addr type 1 %ld\n", a);  // %d,%u,%i all fly
  printf("addr type 1 %li\n", a);  // %d,%u,%i all fly
  printf("addr type 1 %lu\n", a);  // %d,%u,%i all fly
  printf("Sizes d %u\n", sizeof(int));
  printf("Sizes ld %u\n", sizeof(long int));
  printf("Sizes lld %u\n", sizeof(long long int));

  printf("Addr type 2 = %p \n", &a[0]);
  printf("Value = %d \n", a[0]);
  printf("Value = %d \n", *a);  // it decays
  return 0;
}