#include <stdio.h>

void prettyPrint(int* scores, size_t arr_size);
int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int z[10];
  int i, j = 0;
  for (i = 9; i >= 0; i--) {
    printf("i %d", i);
    printf("j %d", j);

    z[j] = a[i];
    j++;
  }
  prettyPrint(z, 10);
  return 0;
}

void prettyPrint(int* scores, size_t arr_size) {
  size_t lastIndex = arr_size - 1;
  for (size_t i = 0; i < arr_size; i++) {
    if (i == 0)
      printf("[%d", scores[i]);
    else if (i == lastIndex)
      printf(",%d]", scores[i]);
    else
      printf(",%d", scores[i]);
  }
}