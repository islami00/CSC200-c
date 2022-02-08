#include <stdio.h>
#include <string.h>
#define MaxBookName 2
void simpleBufferClear();
void strWarn(char* strptr, int maxLength, char* message);
char* setupForPuts(char* stringPointer);
// MaxBookName is constant because it's expanded as a macro by c. Interesting,
// meaning we can also perform constant operations in macros for rust
int main() {
  struct book {
    char name[MaxBookName];
    float price;
    int pages;
  };
  //   Book direct. Feels like json
  struct book arr[2] = {{"name1", 2.3, 2}, {"name2", 2.5, 5}};
  struct book arr2[2];
  for (size_t i = 0; i != 2; i++) {
    printf("Enter name");
    fgets(arr2[i].name, MaxBookName, stdin);
    // Deal with str fallout.
    strWarn(arr2[i].name, MaxBookName,
            "\nWarning! The name entered is too long and may be truncated.\n");
    printf("Enter price");

    scanf("%f", &arr2[i].price);
    simpleBufferClear();
    printf("Enter pages");
    scanf("%d", &arr2[i].pages);
    simpleBufferClear();
  }
  for (size_t i = 0; i != 2; i++) {
    // Clean up ending newline
    setupForPuts(arr2[i].name);
    printf("Name ");
    puts(arr2[i].name);
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

// Warn if the buffer size is exceeded for the input string.
// The length passed is one less than specified max length. Not sure why
void strWarn(char* stringPointer, int maxLength, char* message) {
  size_t length = strlen(stringPointer);
  // strlen captured is one less than. Cuz gets will stop reading if maxLength
  // is not \n
  int proper_max_length = maxLength - 1;
  if (length >= proper_max_length) {
    puts(message);
    simpleBufferClear();
  }
}
char* setupForPuts(char* stringPointer) {
  // Return string if string is clean of \n at end.
  size_t length = strlen(stringPointer);
  if (stringPointer[length - 1] != '\n') return stringPointer;
  // Truncate and recurse
  stringPointer[length - 1] = '\0';
  setupForPuts(stringPointer);
}