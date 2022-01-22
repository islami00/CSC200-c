#include <stdio.h>

int main() {
  struct book {
    char name[78];
    float price;
    int pages;
  };
  struct book b5 = {"yo", 2.3, 3};
  //   print b5 members
  puts(b5.name);
  printf("%f\n", b5.price);
  printf("%d\n", b5.pages);
  struct book b1, b2, b3;
  printf("Enter book details\n");
  printf("Order: \n");
  printf("Name:\tPrice:\tPages:\n");
  scanf("%s %f %d", &b1.name, &b1.price, &b1.pages);
  scanf("%s %f %d", &b2.name, &b2.price, &b2.pages);
  scanf("%s %f %d", &b3.name, &b3.price, &b3.pages);

  printf("Name: %s Price: %f Pages: %d\n", b1.name, b1.price, b1.pages);
  printf("Name: %s Price: %f Pages: %d", b2.name, b2.price, b2.pages);
  printf("Name: %s Price: %f Pages: %d", b3.name, b3.price, b3.pages);

  return 0;
}