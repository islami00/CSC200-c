#include <stdio.h>
#include <string.h>
int findStringLengthRecursively(char* str);
int main() {
  int limit = 100;
  char number[limit];
  printf("Enter the number: <Limited to %d digits>", limit);
  // pointer by decay
  fgets(number, sizeof(number), stdin);
  int digits = findStringLengthRecursively(number);
  printf("This is the size of the number: %u \n", digits);
  return 0;
}
// strings decay to pointers.  Note typing for args to disambiguate.
int findStringLengthRecursively(char* str) {
  // recursively continue till null is reached, filter return
  if ((*str == '\0') || (*str == '\n') || (*str == *"\r\n")) return 0;
  // else, call this with the next pointed element and a running count
  else
    return 1 + findStringLengthRecursively(str + 1);
}