# Overview

Pointers are variables whose value is a memory address.

## Pointer operations

As such, the pointer data type is special since we are not manipulating values, but addresses (branf\*\*k).

### Addition

Pointer addition essentially moves the eye of our turing machine to the next location. Hence why `ptr + 1` moves to the next location by the register size (2 or 4 byte memory addressing or that unit compute size), **Turing complete**.

Hence why arrays, which are contiguous blocks of memory with either values or addresses (psuedo arrays like in python with linked lists), can be accessed sequentially via pointer addition.

Which is why this code works.

```c
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

```

Since arrays decompose to pointers in functions, now we can take things to the next level:

```c
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
```

### Assignment

Say we assign an address of a variable to a pointer and swap the value at that address by reassignment of the pointed variable, the value of the pointer remains the same but the value we get by grabbing with `*` also changes dynamically which is another advantage of pointers.

Hence,

```c
#include<stdio.h>
int main(){
    int *p;
    int c = 0;
    p = &c;
    c = 1;
    printf("p=c -> %d=%d",*p,c);
}
```

Now, what about mutating the pointed value without touching the main variable??

```c
#include <stdio.h>
int main() {
  int *p;
  int c = 0;
  p = &c;
  c = 1;
  printf("p=c -> %d=%d", *p, c);
  *p = 2;
  printf("\n*p=2, but *p stores a reference to c so, -> %d=%d", *p, c);
  printf("\n imagine it like mutating an array in js without deep copy");
  return 0;
}

```

Refs are pretty nice for dynamic stuff likethese without sacrificing memory too much. But be careful, no garbage collection! so be sure to deref your pointers after you're done especially in one-off situations like for loops

Or if you point to something in a function, make sure to reset right after because the variable will be dropped once the function stops executing.

# Typing

Like all values, as you may have noticed, pointers also need to have a data type associated with them so we have a better grasp of the referenced value. (I'll be using pointers and references interchangeably due to the ease of visualising the latter)
