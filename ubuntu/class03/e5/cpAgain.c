#include <stdio.h>

// as suggested by co-pilot

int main()

{

    float cp, sp, profit;
    printf("Enter the cost price");
    scanf("%f", &cp);
    printf("Enter the selling price");
    scanf("%f", &sp);
    profit = sp - cp;
    if (profit > 0)
    {
        printf("Profit is $%.2f", profit);
    }else if(profit == 0)
    {
        printf("No profit, you broke even");
    }
    else
    {
        profit *= -1;
        printf("Loss is $%.2f", profit);
    }
    return 0;
}