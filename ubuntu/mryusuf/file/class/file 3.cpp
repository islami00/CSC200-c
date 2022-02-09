#include <stdio.h>
main()
{ FILE *f1;
char c;
f1= fopen("input.txt","w"); /* open file for writing */
while((c=getchar()) != EOF) /*get char from keyboard until CTL-Z*/
putc(c,f1); /*write a character to INPUT */
fclose(f1); /* close INPUT */
f1=fopen("input.txt","r"); /* reopen file */
while((c=getc(f1))!=EOF) /*read character from file INPUT*/
printf("%c", c); /* print character to screen */
fclose(f1);
}
