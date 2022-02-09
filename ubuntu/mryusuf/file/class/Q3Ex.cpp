#include<stdio.h>
int main(){
	int x = 0; int y = 5;
do {
switch (x) {
case 2:
case 3:
y += 3 * x;
break;
default:
y += x;
}
} while (++x < 5);

}
