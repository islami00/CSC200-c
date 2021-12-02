#include <stdio.h>
void prettyPrint(int* scores);
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
  prettyPrint(scores);

  return 0;
}
void prettyPrint(int* scores) {
  for (size_t i = 0; i < 5; i++) {
    switch (i) {
      case 0:
        printf("[%d", scores[i]);
        break;
      case 4:
        printf(",%d]", scores[i]);
        break;
      default:
        printf(",%d", scores[i]);
        break;
    }
  }
}