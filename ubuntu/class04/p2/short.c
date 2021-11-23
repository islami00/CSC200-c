#include <stdio.h>
int addNumbers(int); // allowed
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a positive integer");
    scanf("%d", &num);
    printf("Sum of all positive starting from %d downwards and inclusive is %d\n", num, addNumbers(num));
    // or what he did:
    printf("Sum = %d", addNumbers(num));

    return 0;
}

int addNumbers(int num)
{
    if (num > 0)
        return num + addNumbers(num - 1);
    else
        return num;
}