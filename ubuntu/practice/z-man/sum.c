#include <stdio.h>

int main() {
  int score, i;
  float average = 0, sum = 0;
  i = 0;

  while (i < 5) {
    printf("enter score ");
    scanf("%d", &score);
    sum += score;
    i++;
  }
  average = sum / 5;
  printf("the average is %f", average);
}