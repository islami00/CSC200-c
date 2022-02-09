#include<stdio.h>
int main(){
	int sum=0, num;
	for(num=2; num<=100;num+=2){
		sum+=num;
	}
	printf("sum is %d\n",sum);
}
