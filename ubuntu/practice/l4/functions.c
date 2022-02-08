#include <stdio.h>

int main() {
  char* str;
  char arr[5][4];
  for (size_t i = 0; i != 4; i++) {
    /* code */
    printf("Enter a number: ");
    scanf("%s\n", &arr[i][0]);
  }
  // PRint all in arr
  for (size_t i = 0; i != 4; i++) {
    // Trunc
    str = &arr[i][0];
    printf("%s\n", str);
  }

  return 0;
}