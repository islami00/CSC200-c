#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[] = "Muhammed";
  char *p;
  int i = 0;
  // using the macro here
  p = name;
  while (i <= 7) {
    printf("%c", p[i]);
    i++;
  }

  printf("\n");
  // Using it explictly.
  // C emphasizing the use of arrays as strings. No one wants to touch that,
  // haha.
  // strings are weird.
  i = 0;
  while (i <= 7) {
    printf("%c", name[i]);
    i++;
  }

  return 0;
}
