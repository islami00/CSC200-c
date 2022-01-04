// setup boilerplate
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char name[25];  // some memory safety.
  gets(name);     // not gnu so no gets docs.
  puts(name);
  return 0;
}
