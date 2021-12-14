#include <stdio.h>

int main()

{
  int fields = 2;
  int records = 4;
  // Model: Student: [id,mark];
  // stud: Student[4] - not jsdoc, but imagine if there were size limits. Or...
  // stud: [Student, Student, Student ... repeatrecordTimes]
  int stud[records][fields];
  int i;
  for (i = 0; i < records; i++) {
    printf("Enter the id and marks of the student: ");
    scanf("%d %d", &stud[i][0], &stud[i][1]);
  }
  printf("\nId\tMarks\n");
  for (i = 0; i < records; i++) {
    printf("%d\t%d\n", stud[i][0], stud[i][1]);
  }
  // export to text for import to excel.
  return 0;
}