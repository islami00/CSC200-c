#include <stdio.h>
#include <string.h>

int main() {
  struct book {
    char name[90];
    float price;
    int pages;
  };
  struct book b[100];

  for (int i = 0; i < 2; i++) {
    printf("Enter name , price and pages \n");
    scanf("%s", b[i].name);
    scanf("%f %d", &b[i].price, &b[i].pages);
  }
  for (int i = 0; i < 2; i++) {
    printf("Name: %s Price: %f Pages: %d\n", b[i].name, b[i].price, b[i].pages);
  }

  return 0;
}