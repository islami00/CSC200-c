#include <stdio.h>

int main()

{

    int goals;
    printf("Enter the number of goals against nigeria: ");
    scanf("%d", &goals);
    if (goals <= 5)
        goto sos;
    else
    {
        printf("All the players should've learnt c\n");
    }
sos:
    printf("Get ready for the next match!\n");
blocksos:
{
    printf("Console.log(\"Hello World\")\n");
    return 0;
}
    goto blocksos;
    return 0;
}