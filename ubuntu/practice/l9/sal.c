#include <stdio.h>
void simpleBufferClear() {
  // Keep clearing till you reach \n
  char res = getchar();
  if (res != '\n') simpleBufferClear();
}
int main() {
  struct employeeDeet {
    char name[90];
    int salary;
    int hourPworkDay;
  };
  struct employeeDeet emps[3];
  // Get sal. of 10 employees.
  for (int i = 0; i < 3; i++) {
    printf("Enter name ");
    fgets(emps[i].name, 90, stdin);
    printf("Enter salary ");
    scanf("%d", &emps[i].salary);
    printf("Enter hrs ");
    scanf("%d", &emps[i].hourPworkDay);
    simpleBufferClear();
  }
  //   Check invrease, print.
  for (int i = 0; i < 3; i++) {
    int hours = emps[i].hourPworkDay;
    if (hours == 8)
      emps[i].salary += 50;
    else if (hours == 3)
      emps[i].salary += 100;
    else if (hours >= 12)
      emps[i].salary += 150;

    printf("Employee name %s", emps[i].name);
    printf("Employee Salary %d\n", emps[i].salary);
  }

  return 0;
}