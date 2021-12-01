#include <stdio.h>

void getNumbersRecursively(int arr[], int heighestIndex);
int sumEvensRecursively(int arr[], int heighestIndex);

int main() {
  // store and size
  int numbers[10];
  int lengthOfNumbers = sizeof(numbers) / sizeof(int);
  // get
  getNumbersRecursively(numbers, lengthOfNumbers - 1);
  // sum
  int sum = sumEvensRecursively(numbers, lengthOfNumbers - 1);
  printf("Sum is %d", sum);
  return 0;
}

void getNumbersRecursively(int arr[], int heighestIndex) {
  // stopping conditions
  if (heighestIndex < 0) return;
  // get nums
  else {
    printf("Enter a number");
    scanf("%d", &arr[heighestIndex]);
    return getNumbersRecursively(arr, heighestIndex - 1);
  }
}

int sumEvensRecursively(int arr[], int heighestIndex) {
  // stopping conditions
  if (heighestIndex < 0) return 0;
  if ((arr[heighestIndex] % 2) != 0)  // go to the next step
    return sumEvensRecursively(arr, heighestIndex - 1);
  // actual sum
  else {
    return arr[heighestIndex] + sumEvensRecursively(arr, heighestIndex - 1);
  }
}
