#include <stdio.h>

int main()

{
    // get the ages
    int x, y;
    printf("Enter the age of Mr X: ");
    scanf("%d", &x);
    printf("Enter the age of Mr Y: ");
    scanf("%d", &y);
    // check the conditions given and print as needed
    if (x > y)
    {
        printf("Mr X is older than Mr Y");
    }
    else if (x < y)
    {
        printf("Mr Y is older than Mr X");
    }
    else
    {
        printf("Mr X and Mr Y are of same age");
    }
    return 0;
}