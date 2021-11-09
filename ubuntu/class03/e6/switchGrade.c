#include <stdio.h>

int ser(int grade) // serialises grade to integers
{
    if (grade < 40) // 40 downwards
        return 0;
    else if (grade < 50) // 40-49
        return 1;
    else if (grade < 60) // 50-59
        return 2;
    else if (grade < 70) // 60-69
        return 3;
    else
        return 4; // 70 upwards
}

int main()

{

    int grade;
    // switch case with range
    printf("Enter your grade: ");
    scanf("%d", &grade);
    int ser_grade = ser(grade);
    switch (ser_grade)
    {
    case 0:
        printf("You failed. \n");
        break;
    case 1:
        printf("You passed with a D");
        break;
    case 2:
        printf("You passed with a C");
        break;
    case 3:
        printf("You passed with a B");
        break;
    case 4:
        printf("You passed with an A");
        break;
    default:
        printf("Your entered grade is %d", grade);
        break;
    }
    return 0;
}