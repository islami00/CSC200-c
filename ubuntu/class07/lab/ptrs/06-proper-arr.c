#include <stdio.h>
// same code as 4 but with a nice caveat

int main(int argc, char const *argv[]) {
  int num[] = {24, 34, 12, 44, 56, 17};
  int i;
  for (i = 0; i < 6; i++) {
    printf("\n address = %p and element = %d", &num[i], num[i]);
    int *ithEl;
    ithEl = num + i;
    printf(" %d %d", *ithEl, i[num]);
  }
  return 0;
}
