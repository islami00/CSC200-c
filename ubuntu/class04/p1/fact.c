#include <stdio.h>
int factorial(int n)
{
    printf("%d current parameter\n", n);
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
int factorialVer(int n)
{
    printf("Ver %d current parameter\n", n);
    if (n <= 1)
        return 1;
    else
        return (n * factorialVer(n - 1));
}
int main()
{
    factorial(9);
    factorialVer(9);
}