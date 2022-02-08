#include <stdio.h>

int main()

{
  int* ptr;
  int c;

  //
  c = 5;

  ptr = &c;
  scanf("%d\n", &c);
  printf("\naddress = %p and value = %d", ptr, *ptr);
  return 0;
}