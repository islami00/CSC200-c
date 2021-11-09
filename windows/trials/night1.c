//i'm getting a hang of these dependencies, they're basically like a key to the set of functions i want to use for my program
#include <stdio.h> //defines types and prototypes for i/o stream fnx
#include <conio.h> // conio is used to gain access to ll i/o fnx , always use ansii when coding with this 
#include <math.h>
int clscr();

int main() {
    int x = 56;
    float y = floor(5.99);
    int d= x+y;
    printf("%d",d);
    getch();
    return 0;
}
