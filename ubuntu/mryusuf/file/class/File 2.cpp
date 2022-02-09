#include<stdio.h>
int main (void)
{
  FILE * fileName;
  char ch;
  fileName = fopen("anything.txt","w");
  for (ch = 'A' ; ch <= 'Z' ; ch++) {
    //putc (ch , fileName);
    fprintf(fileName,"%c\n",ch);
    //fprintf(fileName,"%d",ch);
    }
  fclose (fileName);
  return 0;
}
