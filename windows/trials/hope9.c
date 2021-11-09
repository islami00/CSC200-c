#include <stdio.h>    
void flush();
int main()
{
    char str[25], car;

    printf("Enter a character\n");
    car = getchar();

    flush();

    printf("Enter a sentence\n");
    fgets(str, 25, stdin);

    printf("\nThe sentence is %s, and the character is %c\n", str, car);

    return 0;
}
void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
// Yup, the code runner works well. I need to learn neh