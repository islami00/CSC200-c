#include <stdio.h>
#include <string.h>
int main() {
  FILE *fp;
  char BM[1000];
  fp = fopen("BMessage.txt", "r");
  if (fp == NULL) {
    printf("The file does not exist\n");
  }
  // Regex for read everything that is not a newline. Simply for formatting.??
  fscanf(fp, "%[^\n]", BM);
  printf("Son, this is my prayer for you on this day\n %s\n", BM);
  fclose(fp);
  return 0;
}
