#include <stdio.h>

int main() {
  int *arraypoint;
  int array[5] = {1, 2, 3, 4, 5};
  // they also decompose during assignment to a pointer without bracket notation
  arraypoint = array;
  printf("arrayPointer=array -> %p=%p", arraypoint, array);

  for (size_t i = 0; i < 5; i++) {
    printf("\narray[%zu]=%d", i, *(arraypoint + i));
  }

  return 0;
}