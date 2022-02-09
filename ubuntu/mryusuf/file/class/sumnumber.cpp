#include<stdio.h>
#include<fstream>
#include<stdlib.h>
int main(){
	FILE *fptr;
	FILE *optr;
	int num[10];
	int sum=0;
	int i;
	fptr=fopen("number.txt","r");
	if(fptr==NULL){
		printf("Thr file can not be found\n");
	}
		for(i=0;i<10;i++){
		fscanf(fptr,"%d",&num[i]);
		sum=sum+num[i];	
		}
	
	optr=fopen("number.txt","a");
	fprintf(optr,"The answer ");
	fprintf(optr,"%d",sum);
}
