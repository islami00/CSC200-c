#include<stdio.h>
int main(){
	FILE *f1, *f2;
	int i, sum=0;
	int scores[10];
	f1=fopen("scores.txt","r");
	if(f1==NULL){
		printf("The file does not exist\n");
	}
	for(i=0;i<10;i++){
		fscanf(f1,"%d\n",scores[i]);
		sum=sum+scores[i];
	}
	fclose(f1);
	f2=fopen("scores.txt","w");
	//f3=fopen("Totalscore.txt","w");
	for(i=9;i>=0;i--){
		fprintf(f2,"%d\n",scores[i]);
	}
	char k[20]="Nice score\n";
	fprintf(f2,"%s\n",k);
	//fprintf(f3,"%d\n",sum);
	fprintf(f2,"%d",sum);
	fclose(f2);
	//fclose(f3);
}
