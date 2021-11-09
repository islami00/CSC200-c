#include <stdio.h>
#include <conio.h>
#include <math.h>

int main () {
    int clsc();
    float a,b,c;
    int d;
    printf("insert no1: "); //lesson, never use single quotes as they spell death in form of character literals
    scanf("%e",&a);//%e gives the float in standard e(x10) form
    printf("insert no2: ");
    scanf("%e",&b);
    c = ((a+b)/23)*5;//note that floats dont work with % which is only closed under N
    //if you got incompatible implicit function declaration issue, then include math.h or the apporpriate dependency baka!
    
    d= floor(c); // so, for some raeson i cannot attach %10 to this because of invalid operands to binary % have..
    d= d%10;
    printf("the approx solution to the problem ((a+b)/23)*5 is %e and in mod is %d",c,d); //%2.2 does this: it approximates to two decimal places if numeric output. the 2. does nthn since there is only one char space
    //for exponent output
    //switching e for f, i noticed that the 2.2 only limits the output to that format if possible, i.e if we have 203.435252 it approximates to 2dp and thats it.
    getch();//huh, didnt need to use return

}