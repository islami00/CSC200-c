#include <stdio.h>
#include <string.h>
int main() {
  FILE *fp;
  char BM[1000];
  fp = fopen("BMessage.txt", "r");
  if (fp == NULL) {
    printf("The file does not exist\n");
  }
  //  c format specifier for read all not \n . Once \n. It terminates
  // https://devdocs.io/c/io/fscanf
  int m;
  fscanf(fp, "%[^\n]%n", BM, &m);
  printf("Number of characters read: %d\n", m);
  printf("Son, this is my prayer for you on this day\n %s\n", BM);
  fclose(fp);
  return 0;
}
