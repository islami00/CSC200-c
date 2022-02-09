#include<stdio.h>
int main(){
	FILE *character;
	char dept;
	character=fopen("name.txt","w");
	if(character==NULL){
		printf("The file does not exist\n");
	}
	while((dept=getchar())!=EOF){
		putc(dept,character);
	}
	fclose(character);
	character=fopen("name.txt","r");
	while((dept=getc(character))!=EOF){
		printf("%c",dept);
	}
	fclose(character);
	return 0;
}
