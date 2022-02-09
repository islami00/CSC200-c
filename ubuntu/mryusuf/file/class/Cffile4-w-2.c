#include <stdio.h>
int main() {
  FILE *fptr;
  char c;
  fptr = fopen("alphabets.txt", "w");
  // Diff here is we don't check if file exists.
  //   Lemme run a little util for that.
  //   Require checks.h and it should have the fExists(fptr) function.
  for (c = 'A'; c <= 'Z'; c++) {
    fprintf(fptr, "%c\t %d\n", c, c);
  }
  fclose(fptr);
  return 0;
}
