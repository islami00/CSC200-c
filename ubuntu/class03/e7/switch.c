#include <stdio.h>
int main()
{
    int swi;
    swi = 1;
    switch (swi)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}