#include <stdio.h>

int recursiveFibonacci(int term)
{
    // memoise
    // it does this using an array initialized to 0
    // this will be our js {} from now on.
    static int memo[100];
    if (term <= 0)
    {
        return 0;
    }
    else if (term == 1)
    {
        return 1;
    }
    else if (memo[term] != 0)
    {
        return memo[term];
    }
    else
    {
        memo[term] = recursiveFibonacci(term - 1) + recursiveFibonacci(term - 2);
        return memo[term];
    }
}
int main()
{
    // The basis of the fibonacci sequence
    // F(0) = 0 and f(1) = 1
    // F(n) = F(n-1) + F(n-2)
    int term = 90;
    for (size_t i = 0; i < 90; i++)
    {
        /* code */
        int number = recursiveFibonacci(i);
        printf("%dth fibonacci is %d\n", i, number);
    }

    return 0;
}