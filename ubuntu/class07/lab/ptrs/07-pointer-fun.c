#include <stdio.h>

int main(int argc, char const* argv[]) {
  short a[8] = {10, 20, 30, 40, 50, 60, 70, 80};
  // I was afraid of dereferencing this pointer and assigning to the value
  // instead, but I was wrong.
  // For clarity, try to place * next to type when declaring
  short* p = a;
  // all different ways of printing the 3rd element
  printf("%i\n", a[3]);
  printf("%i\n", *(a + 3));
  printf("%i\n", *(p + 3));
  // Note this funny example. Essentially bracket notation is a macro for
  // pointer addition in c on pointers and instantly dereffing. Faqat.
  printf("%i\n", p[3]);
  printf("%i\n", 3 [a]);
  return 0;
}
