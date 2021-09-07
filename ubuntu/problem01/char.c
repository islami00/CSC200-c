#include <stdio.h>
int main()
{
    char var = -128;
    unsigned char var2 = 128;
    char var3 = -1;
    unsigned char var4 = 255;
    int test = var3 == var4;
    printf("%c is same as %c or %c %d", var, var2, var4, test);
    return 0;
}