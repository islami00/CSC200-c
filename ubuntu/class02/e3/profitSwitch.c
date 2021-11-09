#include <stdio.h>
// COMPARISON DOESN'T WORK IN SWITCH
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
    // conditionals; could use switch but distilling to zero is risky
    if (diff > 0)
    {

        printf("Your profit is $%.2f i.e ", diff);
    }
    else if (diff == 0)
    {
        printf("You made no loss or gain $%.2f", diff);
    }
    else
    {

        diff *= -1;
        printf("You lost $%.2f", diff);
    }

    return 0;
}