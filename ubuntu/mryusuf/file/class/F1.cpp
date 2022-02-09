#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	FILE *fp;
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("File does not exist\n");
	}
	fscanf(fp,"%[^\n]",c);
	printf("The data is\n %s\n",c);
	fclose(fp);
}
