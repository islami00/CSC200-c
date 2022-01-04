#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  // loop through, show the different ways of indexing with pointer and brackets
  // back and forth and print array address
  for (i = 0; i < 10; i++) {
    printf("The number is at %p,", (arr + i));
    printf("Which is also %p is =", &arr[i]);
    printf(" %d", *(arr + i));
    printf(" %d", arr[i]);
    printf(" %d\n", i[arr]);
  }
  return 0;
}
