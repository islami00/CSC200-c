#include<stdio.h>
int main(){
	FILE *fptr;
	char c;
	fptr=fopen("alphabets.txt","w");
	for(c='A';c<='Z';c++){
		fprintf(fptr,"%c\t %d\n",c,c);
	}
	fclose(fptr);
	return 0;
}
