#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// check this
int main() {
  // define a char unit as 256;
  int charLimit1 = 256;

  struct securityPerson {
    char name[10];
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
    printf("\nEnter the name of the person");
    fgets(peeps[i].name, 10, stdin);
    printf("\nEnter the age of the person");
    scanf("%d", &peeps[i].age);
    printf("\nEnter the height of the person");
    scanf("%d", &peeps[i].height);
    printf("\nEnter the gender");
    scanf("%s", &peeps[i].gender);
  }
  // print the sec peeps
  for (int i = 0; i < 2; i++) {
    puts(peeps[i].name);
    printf("%d\n", peeps[i].age);
    printf("%d\n", peeps[i].height);
  }

  return 0;
}