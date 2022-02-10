#include <stdio.h>
void prettyPrint(int* scores, size_t arr_size);
int main() {
  int arr[5] = {1, 23, 4, 5, 67};
  int revarr[5];
  int lastIndex = 5 - 1;
  for (size_t i = 0; i < 5; i++) {
    int complement = lastIndex - i;
    revarr[i] = arr[complement];
  }
  prettyPrint(arr, 5);
  printf("\n");
  prettyPrint(revarr, 5);

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

