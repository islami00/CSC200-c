#include <stdio.h>
int sumnumbers(int arr[], int n);
int main() {
  int array[] = {60, 45, 67, 90, 54, 65};
  // cyber are having a 30min quiz today. Cool.
  // ask him for the qns
  int length = sizeof(array) / sizeof(int);
  printf("Length %d", length);
  printf("Sum of els = %d", sumnumbers(array, length - 1));
  return 0;
}
int sumnumbers(int arr[], int last_index) {
  if (last_index < 0) {
    return 0;
  } else {
    return arr[last_index] + sumnumbers(arr, last_index - 1);
  }
}