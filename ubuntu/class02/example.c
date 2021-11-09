
#include <stdio.h>
// checks an array with specified size for the value specified
int binary_search(int *array, int size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

char string[5] = "12345";

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 5;
    int SIZE = sizeof array / sizeof array[0];
    int index = binary_search(array, SIZE, value);
    if (index == -1)
        printf("No value was found");
    else
        printf("The index of %d is %d\n", value, index);
    return 0;
}
// binary search