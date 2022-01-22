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
    char gender[2];
    // assume height is in metres
    int height;
  };
  // stores ten
  struct securityPerson peeps[10];
  /*get 10 sec peeps */

  for (int i = 0; i < 2; i++) {
    // fgets bugged out cuz charLimit meant it had to take that specific number
    // of characters Not what we wanted
    // printf("Enter the name of the person\n");
    // fflush probably does nothing, but this work...and I won't change it for
    // now
    fflush(stdin);

    gets(peeps[i].name);

    // Do it before each
    fflush(stdin);

    // printf("Enter the age of the person\n");
    // Scanf is input parsing https://stackoverflow.com/a/65493922/16071410 . So
    // hb this:
    scanf("%d\n", &peeps[i].age);
    fflush(stdin);
    // printf("Enter the height of the person\n");
    scanf("%d\n", &peeps[i].height);
    // Error happens before here
    fflush(stdin);
    // printf("Enter the gender\n");
    // Using gets twice in a row is the problem. Use fflush lets see
    gets(peeps[i].gender);
  }
  // print the sec peeps
  for (int i = 0; i < 2; i++) {
    printf("Person %d\n", i + 1);
    printf("Name:");
    puts(peeps[i].name);
    printf("Age: %d\n", peeps[i].age);
    printf("Height: %d\n", peeps[i].height);
    printf("Gender: %s\n", peeps[i].gender);
  }

  return 0;
}