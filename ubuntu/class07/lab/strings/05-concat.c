#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  // This can be dynamic cuz it will be terminated atlast value.
  char source[] = "NileUniversity";
  // To be more accurate, we could use strlen(source) + 1 to get the exact size
  // for target
  char target[20] = "Somerandomtext";
  // cats l+r storing l+r in target
  strcat(target, source);
  printf("source = %s target = %s. I.e source = target \n", source, target);

  return 0;
}
