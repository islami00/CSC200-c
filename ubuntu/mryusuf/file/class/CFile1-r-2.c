#include <stdio.h>
#include <string.h>
int main() {
  char name[1000];
  FILE *fp;
  fp = fopen("university.txt", "r");
  if (fp == NULL) {
    printf("File does not exist\n");
  }
  // This format specifier is equivalent to getline()
  fscanf(fp, "%[^\n]", name);  // read the text in the file.
  printf("The data contained in the file is\n %s\n", name);
  fclose(fp);
  return 0;
}
