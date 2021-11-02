#include <stdio.h>

int main()

{
    int currentYr;
    int yrJoined;
    // accept inputs : current year, years worked
    printf("Enter the current year: ");
    // note: scanf will throw buffer size if not a ref is given
    scanf("%d", &currentYr);
    printf("Enter the year you joined the org: ");
    scanf("%d", &yrJoined);
    int yrsWked = currentYr - yrJoined;
    // if
    if (yrsWked > 3)
    {
        printf("You have a bonus of $2500");
    }
    return 0;
}