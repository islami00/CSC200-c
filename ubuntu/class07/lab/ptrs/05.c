#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[6] = {1, 2, 3, 4, 5, 6};
  int *p;
  p = a;
  printf("%ld\n", *p);
  p++;
  printf("%ld\n", *p);
  p += 4;
  printf("%ld\n", *p);
  return 0;
}
