#include<stdio.h>
int main(){
	FILE *fp;
	char c;
	fp=fopen("something.txt","w");
	if(fp==NULL){
		printf("File can not be open\n");
	}
	while((c=getchar())!=EOF){
		putc(c,fp);
	}
	fclose(fp);
	fp=fopen("something.txt","r");
	while((c=getc(fp))!=EOF){
		printf("The contents of the file is\n %c",c);
		
	}
	fclose(fp);
}
