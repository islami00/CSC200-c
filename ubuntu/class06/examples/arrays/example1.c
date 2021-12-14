#include <stdio.h>

int main() {
  int *arraypoint;
  int array[5] = {1, 2, 3, 4, 5};
  // point to address of first value in array by default
  // note also that arrays don't need to be casted to pointer.
  // they are by definition a pointer to some address for a value
  arraypoint = array;
  printf("arrayPointer=array -> %p=%p", arraypoint, &array[0]);

  for (size_t i = 0; i < 5; i++) {
    printf("\narray[%zu]=%d", i, *(arraypoint + i));
  }

  return 0;
}