#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num[] = {24, 34, 12, 44, 56, 17};
  int i, *j;
  j = &num[0];
  // print address and element through j
  for (i = 0; i < 6; i++) {
    printf("\n address = %p and element = %d", j, *j);
    j++;
  }

  return 0;
}
