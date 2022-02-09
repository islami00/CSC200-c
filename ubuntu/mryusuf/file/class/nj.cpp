#include<stdio.h>
int main(){
	int i,j,end, isPrime, sum=0;
	for(i=2;i<=10;i++){
	
	isPrime=1;
	for(j=2;j<=i/2;j++){
		if(i%j==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime==1){
		sum+=i;
	}
}
printf("The sum of the prime numbers is %d\n",sum);
}
