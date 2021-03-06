#include <stdio.h>

// sjf schedulin

int main() {
  int n;
  printf("ENter a number");
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    int num;
    printf("ENter a number for the array");
    scanf("%d", &num);
    array[i] = num;
  }

  float sum = 0;
  float average = 0;
  // iterative sum
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }

  int newSum = recursiveArraySum(array, n - 1);
  printf("The recursive Sum is %d", newSum);
  average = sum / (float)n;
  printf("Sum is %f", sum);

  printf("Average is %f", average);
  return 0;
}  // recursive

int recursiveArraySum(int arr[], int lastIndex) {
  if (lastIndex < 0)
    return 0;
  else
    return arr[lastIndex] + recursiveArraySum(arr, lastIndex - 1);
}