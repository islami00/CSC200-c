#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[] = {10, 20, 36, 72, 45, 36};
  int *j, *k;
    
  j = &a[4];
  k = (a + 4);
  if (j == k)
    printf("j and k point to the same location\n");
  else
    printf("j and k do not point to the same location\n");
  return 0;
}
