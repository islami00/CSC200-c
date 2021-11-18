#include <stdio.h>

int main()

{
    // get radius and set custom pi
    double radius,pi;
    pi =  3.142;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    // calculate area and print
    double area = pi * radius * radius;
    printf("The area of the circle is: %.2lf",area);

    return 0;
}