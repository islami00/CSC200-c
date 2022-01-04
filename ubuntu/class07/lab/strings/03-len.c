#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[25];
  gets(name);
  int len1 = strlen(name);
  int len2 = strlen("Hellostring");
  printf("%d\n", len1);
  printf("%d\n", len2);
  return 0;
}
