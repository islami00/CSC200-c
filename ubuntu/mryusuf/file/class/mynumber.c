#include<stdio.h>
int main(){
	FILE *fp;
	int num;
	fp=fopen("mynumber.txt","w");
	if(fp==NULL){
		printf("File does not exist\n");
	}
	printf("Enter a number\n");
	scanf("%d",&num);
	fprintf(fp,"%d\n",num);
	fclose(fp);
	return 0;
}
