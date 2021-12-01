#include <stdio.h>

int main() {
  int size;
  printf("Enter the amount of numbers");
  scanf("%d", &size);
  int arr[size];
  float average = 0, sum = 0;
  // get numbers
  for (size_t i = 0; i < size; i++) {
    printf("Enter the nth-%lu number : ", i + 1);
    scanf("%d", &arr[i]);
  }
  // sum numbers
  for (size_t i = 0; i < size; i++) {
    sum += arr[i];
  }
  // average
  average = sum / (float)size;
  printf("The average of the numbers is: %f", average);
  return 0;
}