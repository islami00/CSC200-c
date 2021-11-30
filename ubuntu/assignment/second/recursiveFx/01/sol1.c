#include <stdio.h>

int getNumbersRecursively(int arr[], int heighestIndex);
int sumEvensRecursively(int arr[], int heighestIndex);

int main() {
  // collect the ten numbers in for loop.
  int numbers[10];
  int lengthOfNumbers = sizeof(numbers) / sizeof(int);
  // implicit decay to pointer for number. so it doesn't go out of scope. Memory
  // safety??
  int ex = getNumbersRecursively(numbers, lengthOfNumbers - 1);
  int sum = sumEvensRecursively(numbers, lengthOfNumbers - 1);
  printf("Sum is %d", sum);
  return 0;
}

int getNumbersRecursively(int arr[], int heighestIndex) {
  // stopping conditions
  if (heighestIndex < 0) return 1;
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
// interesting. We use pointers to move complex structures easily without
// muddling types