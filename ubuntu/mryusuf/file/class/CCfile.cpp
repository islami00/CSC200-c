#include<stdio.h>
int main(){
FILE *fptr;
char c;
fptr=fopen("ASCII.txt","w");
if(fptr==NULL){
	printf("The file does not exist\n");
}	
for(c='A';c<='Z';c++){
	fprintf(fptr,"%c\t %d\n",c,c);
}
fclose(fptr);
return 0;
}
//    A   65
//    B   66
