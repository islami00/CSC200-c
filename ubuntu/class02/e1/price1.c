#include<stdio.h>

int main(){
    // first accept inputs.
    int qty; // integer as qty is discrete
    float ppi;
    // refactor to function later
    printf("Enter the quantity: ");
    scanf("%d",&qty);
    printf("Enter the price per items. As a single number with decimals for lower denominations: ");
    scanf("%f",&ppi);
    // then calc the price
    float price = (float) (qty * ppi);
    // apply discount if
    if (qty > 1000)
    {
        float discount = (float) price * 0.1;
        price *= 0.9;
        printf("Your discount is: $%.2f", discount);
    }
    printf("You are to pay $%.2f", price);
    return 0;
}

