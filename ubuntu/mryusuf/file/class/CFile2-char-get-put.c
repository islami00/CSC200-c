#include <stdio.h>
int main() {
  FILE *character;
  int dept;
  character = fopen("name.txt", "w");
  if (character == NULL) {
    printf("The file does not exist\n");
  }

  while ((dept = getchar()) != '0') {
    if (dept == '\n') continue;
    printf("loop %c", dept);
    // https://devdocs.io/c/io/fputc
    putc(dept, character);
  }
  fclose(character);
  character = fopen("name.txt", "r");
  // Standard C I/O file reading loop.
  // https://devdocs.io/c/io/fgetc
  while ((dept = getc(character)) != EOF) {
    printf("%c", dept);
  }
  fclose(character);
  return 0;
}
