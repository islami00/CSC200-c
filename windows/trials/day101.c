#include <stdio.h>

char printVars(char char1,char char2){
    printf("nice to meet you %s %s",char1,char2);
};

char takeUserInput(char in1,char in2){
    scanf("%s %s",&in1,&in2);
};

char a,b;

int main (){
    takeUserInput(a,b);
    printVars(a,b);
   };
// /n puts new line, /t is tab, they are whitespaces
/* 
problems

a and b are stored finally as null.

even with just a character. */