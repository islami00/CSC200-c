#include <stdio.h>
#include <string.h>

int main() {
  struct book {
    char name[90];
    float price;
    int pages;
  };
  //   Book direct. Feels like json
  struct book arr[2] = {{"name1", 2.3, 2}, {"name2", 2.5, 5}};
  struct book arr2[2];
  for (size_t i = 0; i != 2; i++) {
    printf("Enter name");
    // This slurps up the stray \n. COuld be more general. E.g if a float is
    // passed to pages, it truncates At the "." leaving that and the decimal
    // part for gets
    scanf("\n");
    gets(arr2[i].name);
    printf("Enter price");

    scanf("%f", &arr2[i].price);
    printf("Enter pages");
    scanf("%d", &arr2[i].pages);
  }
  for (size_t i = 0; i != 2; i++) {
    printf("name %s\n", arr2[i].name);
    printf("price %f\n", arr2[i].price);
    printf("pages %d\n", arr2[i].pages);
  }
  return 0;
}