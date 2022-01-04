#include <stdio.h>
#include <string.h>
// This does the same as 01 but with a caveat: It's dynamic to size, so it keeps
// going till we hit the end. \0.
int main(int argc, char const *argv[]) {
  char name[] = "Muhammed";
  char *p;
  int i = 0;
  // using the macro here
  p = name;
  while (p[i] != '\0') {
    printf("%c", p[i]);
    i++;
  }
  // resets
  printf("\n");
  i = 0;
  while (name[i] != '\0') {
    printf("%c", name[i]);
    i++;
  }

  return 0;
}
