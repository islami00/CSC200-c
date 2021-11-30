#include <stdio.h>

int main()

{
  int i = 0, j = 0;
  // traverse a 2d array
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("arr[%d][%d] = %d", i, j, a[i][j]);
      // remember: y gives rise to rows, and x gives rise to columns
      // you can use %1$ to use positional arguments in c
      // ref: https://stackoverflow.com/a/6322594/16071410
      printf(" or (%2$d,%1$d) = %3$d  ", i, j, a[i][j]);
    }
    printf("\n");
  }

  return 0;
}