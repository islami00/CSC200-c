#include <stdio.h>

// iterative
int interativeRisingFactorial(int number)
{
    int i, n = 1;
    for (i = 1; i <= number; i++)
    {
        n = n * i;
    }
    return n;
}

int recursiveFallingFactorial(int number)
{
    if ((number == 1) || (number == 0))
    { // added zero to cover all bases.
        return 1;
    }
    return number * recursiveFallingFactorial(number - 1);
}
int main()
{
    int number = 5;
    int n = interativeRisingFactorial(number);
    printf("The Factorial of %d is %d\n", number, n);
    n = recursiveFallingFactorial(5);
    printf("The Factorial of %d is %d\n", number, n);

    return 0;
}