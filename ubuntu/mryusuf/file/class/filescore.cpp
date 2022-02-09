#include<stdio.h>
int main(){
	FILE *fp;
	int i, number[10],sum=0;
	float average;
	fp=fopen("test score.txt","r");
	if(fp==NULL){
		printf("The file does not exist\n");
		
	}
	for(i=0; i<10;i++){
		fscanf(fp,"%d\n",&number[i]);
		sum=sum+number[i];
	}
	average=sum/i;
	printf("The sum of the 10 scores is %d\n",sum);
	printf("The class average is %f\n",average);
}
