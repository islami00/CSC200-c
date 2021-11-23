#include <stdio.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // difference in memaddr ofarrays
    printf("Address of array in hex: %p\n Address of array in decimal: %u\n", a, a);
    // %p prints the memory address of the array in hexadecimal
    // %u prints the memory address of the array in decimal
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[0], &a[0], &a[0]);
    // this is the same as the address of the array itself as that simply points to the first element of the array
    // it being separated by 4 means int size is 4byte
    // by 2 means int or usize is 2byte
    // it's address because we reffing the element as a pointer
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[1], &a[1], &a[1]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[2], &a[2], &a[2]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[3], &a[3], &a[3]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[4], &a[4], &a[4]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[5], &a[5], &a[5]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[6], &a[6], &a[6]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[7], &a[7], &a[7]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[8], &a[8], &a[8]);
    printf("Address of el %d in hex: %p\n Address of el in decimal: %u\n", a[9], &a[9], &a[9]);
    return 0;
}