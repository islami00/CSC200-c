#include <stdio.h>

int main()

{
    // get the five subjects
    int mk1, mk2, mk3, mk4, mk5;
    printf("Enter the 5 subject scores\n");
    scanf("%d%d%d%d%d", &mk1, &mk2, &mk3, &mk4, &mk5); // grouped scanf to avoid repetition
    // compute -  total and average and percentage assuming everything is graded over 100
    int total = mk1 + mk2 + mk3 + mk4 + mk5;
    float avg = total / 5;
    float scale = 100;
    float per = (avg / scale) * 100;
    // logic to determine division
    if (per >= 60) // 60 and above
        printf("You are in the first division");
    else if (per >= 50) // 50 - 59
        printf("You are in the second division");
    else if (per >= 40) // 40 - 49
        printf("You are in the third division");
    else // below 40
        printf("You have failed");

    return 0;
}