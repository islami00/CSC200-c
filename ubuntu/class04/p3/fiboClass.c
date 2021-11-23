#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m = 0, i;
    printf("Enter TOtal terms: n");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d\n", m);
        }
        else
        {
            // ambiguous
            m = (m - 1) + (m - 2);
            printf("%d\n", m);
        }
    }
    return 0;
}
