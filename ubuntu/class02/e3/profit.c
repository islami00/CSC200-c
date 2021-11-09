#include <stdio.h>

int main()

{
    // get inputs
    float cp, sp;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    // calc diff
    float diff = sp - cp;
    // conditionals
    if (diff > 0)
    {
        printf("Your profit is $%.2f", diff);
        return 0;
    }
    if (diff == 0)
    {
        printf("You made no loss or gain $%.2f", diff);
        return 0;
    }
    diff *= -1;
    printf("You lost $%.2f", diff);

    return 0;
}