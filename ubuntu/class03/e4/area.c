#include <stdio.h>

int main()

{

    float pi, rad, area;
    printf("Enter rad ");
    scanf("%f", &rad);
    pi = 3.14;
    area = pi * rad * rad;
    printf("This is the area, %f", area);
    return 0;
}