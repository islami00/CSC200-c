#include<stdio.h>
int main(){
	FILE *f1, *f2, *f3;
	int i, sum=0;
	int scores[20];
	f1=fopen("studentscores.txt","r");
	if(f1==NULL){
		printf("The file does not exist\n");
	}
	for(i=0;i<20;i++){
		fscanf(f1,"%d",scores[i]);
		sum=sum+scores[i];
	}
	fclose(f1);
	f2=fopen("studentscores.txt","w");
	f3=fopen("Totalscore.txt","w");
	for(i=19;i>=0;i++){
		fprintf(f2,"%d\n",scores[i]);
	}
	fprintf(f2,"%d\n",sum);
	fprintf(f3,"%d\n",sum);
	fclose(f2);
	fclose(f3);
}
