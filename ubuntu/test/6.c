#include <stdio.h>

int main()

{
    // init sum and count at once.
    float sum = 0, count = 0;
    for (int i = 1; i <= 10; i++) // used loop to avoid repetition
    {
        // get a number
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        // add it to the running sum
        sum += n;
        // increase the count
        count++;
    }
    // calc average and display
    float avg = sum / count;
    printf("The average of the ten numbers is: %f", avg);

    return 0;
}