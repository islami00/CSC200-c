#include <stdio.h>
// Add this to utils header too.
void prettyPrint(int* scores, size_t arr_size);
int main() {
  int scores[5] = {67, 74, 56, 90, 87};
  while (scores[3] != 80) {
    printf("Enter 80: ");
    scanf("%d", &scores[3]);
  }
  while (scores[4] != 76) {
    printf("Enter 76: ");
    scanf("%d", &scores[4]);
  }
  prettyPrint(scores, 5);

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