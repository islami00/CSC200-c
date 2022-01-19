#include <stdio.h>

int main() {
  struct book {
    char name[78];
    float price;
    int pages;
  };
  struct book b5 = {"yo", 2.3, 3};
  //   print b5 members %llu is sufficient for addressing or %zu as it shows int
  //   address of each
  printf("Addresss of name %zu\n", &b5.name);
  printf("Address of the price %zu\n", &b5.price);
  printf("Address of the page %zu\n", &b5.pages);
  // Compiler still raises ls error. See:
  // https://stackoverflow.com/a/5208673/16071410
  printf("Addresss of name %p\n", &b5.name);
  printf("Address of the price %p\n", &b5.price);
  printf("Address of the page %p\n", &b5.pages);

  return 0;
}