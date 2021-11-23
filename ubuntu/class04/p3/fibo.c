#include <stdio.h>
int fibonacci(int term);
int main(int argc, char const *argv[])
{
    // fibonacci is defined as a sequence where n =  n-1 + n-2;
    int fiboTerm;
    printf("Enter the term of the fibonacci sequence: ");
    scanf("%d", &fiboTerm);
    printf("The %d term of the fibonacci sequence is %d\n", fiboTerm, fibonacci(fiboTerm));
    return 0;
}
int fibonacci(int term)
{
    if (term == 0)
    {
        return 0;
    }
    else if (term == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(term - 1) + fibonacci(term - 2);
    }
}