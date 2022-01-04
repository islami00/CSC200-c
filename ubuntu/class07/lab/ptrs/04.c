#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num[] = {24, 34, 12, 44, 56, 17};
  int i;
  for (i = 0; i < 6; i++) {
    // Once we use bracket syntax we have to explicitly decay using address,
    // otherwise we natively treat like ptr Haha , call this arrays exposed!
    // It's been a pointer all along.
    // Which is why num[i] = *(num + i) =  *(i + num) = i[num] simple arith.

    printf("\n address = %p and element = %d", &num[i], num[i]);
    printf(" %d %d", *(i + num), i[num]);
  }
  return 0;
}
