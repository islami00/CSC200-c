#include <stdio.h>
#include <stdlib.h>
int main() {
  char *string;
  string = malloc(5);
  string[0] = 'a';
  string[1] = 'b';
  string[2] = '3';
  string[3] = '4';
  string[4] = '\0';
  printf("%s", string);
  return 0;
}