#include<stdio.h>
int main(){
	FILE *ptr,*f;
	int num[5];
	int x;
	int sum=0;
	ptr=fopen("Marks.txt","r");
	if(ptr==NULL){
		printf("File does not exist\n");
	}
	for(x=0;x<5;x++){
		fscanf(ptr,"%d\n",&num[x]);
		sum=sum+num[x];
		//printf("%d\n",sum);
	}
	fclose(ptr);
	f=fopen("Marks.txt","a");
	fprintf(ptr,"Sum is %d\n",sum);
	fclose(f);
	return 0;
}
