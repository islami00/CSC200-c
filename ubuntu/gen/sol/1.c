#include <stdio.h>
#include <stdlib.h>

int main() {
  struct product {
    int pcode;
    int price;
  };
  struct product products[5];
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    scanf("%d %d", &products[i].pcode, &products[i].price);
  }
  for (int i = 0; i < 5; i++) {
    // printf("%d %d\n", products[i].pcode, products[i].price);
    sum += products[i].price;
  }
  printf("%d\n", sum);
  return 0;
}