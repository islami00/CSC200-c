#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// check this
int main() {
  // define a char unit as 256;
  __SIZE_TYPE__ charLimit2 = 256;
  struct securityPerson {
    char name[256];
    int age;
    char gender;
    // assume height is in metres
    int height;
  };
  // stores ten
  struct securityPerson peeps[10];
  /*get 10 sec peeps */

  for (int i = 0; i < 2; i++) {
    // fgets bugged out cuz charLimit meant it had to take that specific number
    // of characters Not what we wanted
    printf("Enter the name of the person\n");
    gets(peeps[i].name);
    printf("Enter the age of the person\n");
    scanf("%d", &peeps[i].age);
    printf("Enter the height of the person\n");
    scanf("%d", &peeps[i].height);
    printf("Enter the gender\n");
    scanf("%s", &peeps[i].gender);
  }
  // print the sec peeps
  for (int i = 0; i < 2; i++) {
    printf("Person %d\n", i + 1);
    printf("Name:");
    puts(peeps[i].name);
    printf("Age: %d\n", peeps[i].age);
    printf("Height: %d\n", peeps[i].height);
    printf("Gender: %c\n", peeps[i].gender);
  }

  return 0;
}