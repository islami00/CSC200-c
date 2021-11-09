
#include <stdio.h>
char string[5]="12345";
int main()
{
   
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 5;
    int SIZE = sizeof array / sizeof array[0];
    int index = binary_search(array, SIZE, value);
    printf("The index of %d is %d\n", value, index);
    return 0;
}
// binary search