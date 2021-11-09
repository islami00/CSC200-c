#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <float.h> //this is needed to use pi and exp cross plat

float main(){
float ra=0;
float area=1;
double pi = 3.14159265358979;
printf("insert r pease hehe: ");
scanf("%e",&ra);
area=(pi)*(ra*ra);
printf("this is the area of your circle waga aruji: %e",area);
getch();
}