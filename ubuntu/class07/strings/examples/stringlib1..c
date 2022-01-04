#include <stdio.h>
#include <string.h>

int main(int argc, char const* argv[]) {
  char str[] = "Hello World";
  // Note: You can't printf %s or scanf %s. Oh yeah, we need to limit if we'll
  // be taking arbitrary vals
  char string[23];
  gets(string);
  puts(str);
  puts(string);
  // string lib is powerful. It has lowercase and stuff
  return 0;
}
