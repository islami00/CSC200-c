#include <stdio.h>
#include <string.h>
void simpleBufferClear();
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
    gets(arr2[i].name);
    printf("Enter price");

    scanf("%f", &arr2[i].price);
    printf("Enter pages");
    scanf("%d", &arr2[i].pages);
    simpleBufferClear();
  }
  for (size_t i = 0; i != 2; i++) {
    printf("name %s\n", arr2[i].name);
    printf("price %f\n", arr2[i].price);
    printf("pages %d\n", arr2[i].pages);
  }
  return 0;
}
// Finally solved the problem. Instead of the scanf hack,
// use this to read an arbitrary character from stdin.
// This runs until it reaches \n so it also covers \r\n of windows!.
// And any other stray bits scanf didn't pick up before last \n Will move to
// util file when I figure out modules.
// It's recursive too, haha.
// Thanks: https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/
void simpleBufferClear() {
  // Keep clearing till you reach \n
  char res = getchar();
  if (res != '\n') simpleBufferClear();
}