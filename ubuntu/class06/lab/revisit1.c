#include <stdbool.h>
#include <stdio.h>
int main() {
  int a;
  int* p;
  p = &a;
  a = 5;
  printf("%p\n", p);  // null exists
  // haha, works just as it should!
  bool dee = true;
  printf("%d\n", *p);
  if (dee) printf("true");
  return 0;
}