#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int solveMeFirst(int a, int b) {
    // Hint: Type return a+b; below
  
 return a+b;
}

int num1=2;
int num2=3;
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    
    while ((num1<1)|(num1>1000)) {
    printf("Your first number is less than 1 or greater than 1000, input a new one: ");
    scanf("%d",&num1);
    
    }
    while ((num2<1)|(num2>1000)) {
    printf("Your second number is less than 1 or greater than 1000, input a new one: ");
    scanf("%d",&num2);
    }
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("this is the sum of your numbers: %d",sum);
    getch();
}


/* 
problems
including an operation in your number input creates a buffer clearing problem for the while. but it clears it eventually
but it has to evaluate it in the first instance if only one operation

 */