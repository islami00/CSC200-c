#include<stdio.h>
int main(){
	FILE *fp1, *fp2;
	int i;
	int num[10];
	int p=1;
	fp1=fopen("Numbers.txt","r");
	if(fp1==NULL)
	{
		printf("The file does not exist\n");
	}
	for(i=0; i<10;i++){
		fscanf(fp1,"%d\n",&num[i]);
		p=p*num[i];
	}
	fclose(fp1);
	fp1=fopen("Numbers.txt","a");
	fprintf(fp1," The product is %d\n",p);
	fclose(fp1);
	fp2=fopen("answernumber.txt","w");
	fprintf(fp2,"The product is %d",p);
	fclose(fp2);
}
