#include <stdio.h>
int main(void) {
  FILE* fileName;
  char ch;
  fileName = fopen("anything.txt", "w");
  for (ch = 'A'; ch <= 'Z'; ch++) {
    fprintf(fileName, "%c\n", ch);
  }
  fclose(fileName);
  return 0;
}
