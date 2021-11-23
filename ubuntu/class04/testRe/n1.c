#include <stdio.h>

// the three.

int main()
{
    int mrX, mrY, mrZ;
    printf("Enter three ages: ");
    scanf("%d%d%d", &mrX, &mrY, &mrZ);
    if (mrX > mrY && mrX > mrZ)
    {
        printf("Mr X is the olderst at %d\n", mrX);
    }
    else if (mrY > mrX && mrY > mrZ)
    {
        printf("Mr Y is the oldest at %d\n", mrY);
    }
    else
    {
        printf("MrZ is the oldest at %d\n", mrZ);
    }
    return 0;
}