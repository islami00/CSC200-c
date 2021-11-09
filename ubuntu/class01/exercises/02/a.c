#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number");
    // this has to be a pointer as we are not moving it entirely, so we ref it and then fill it in.
    scanf("%d", &x);
    if ((x % 2) == 0)
    {
        printf("The number %d is even", x);
    }
    else
    {
        printf("The number %d is odd", x);
    }

    return 0;
}
