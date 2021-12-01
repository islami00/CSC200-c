#include <stdio.h>
#include <string.h>
long long int findDigitsRecursivelyWithInt(long long int number);
// declaration is cuz c compiler gets confused with typings
int findStringLengthRecursively(char* str);
int main() {
  // overflow problem - limit is 20 digits
  goto charRun;
intRun : {
  long long int num;
  printf("Enter a number");
  scanf("%lld", &num);
  long long int digits = findDigitsRecursivelyWithInt(num);
  printf("Digits are: %lld", digits);
}
// thanks to: https://programiz.com/c-programming/c-strings ;
// https://developer.mozilla.org/en-US/docs/Glossary/CRLF ;
// https://www.programiz.com/c-programming/c-pointers-arrays
//  read up on pointer arithmetic though;
charRun : {
  int limit = 100;
  char number[limit];
  printf("Enter the number: <Limited to %d digits>", limit);
  // args to scanf and the like must be a pointer <memory safety! rust
  // borrows!!> and arrays decay to pointers so...
  fgets(number, sizeof(number), stdin);

  int digits = findStringLengthRecursively(number);

  printf("This is the size of the number: %u \n", digits);
  puts(number);
}
  return 0;
}
// strings decay to pointers.  Note typing for args to disambiguate.
int findStringLengthRecursively(char* str) {
  // recursively continue till null is reached
  // if the pointer we pass is to the null character, stop and return zero to
  // terminate our sum. Note that the count is okay. It starts at one as the
  // string must be at least one long, then it calls the fx again, if we hit
  // null it immediately returns zero, stopping our sum. The reason it is one
  // more is because of carriage feed from fget. This feed is \n for lf and \r\n
  // for crlf.
  if ((*str == '\0') || (*str == '\n') || (*str == *"\r\n")) return 0;
  // else, call this with the next pointed element and a running count
  else  // somehow adding one to this pointer moves to the next array address.
        // Which is good for my case though. I feel like this will fail, [polly
        // gootta use similar size for sizing hehe Oh! these buggarts! that's
        // what they do! use size to move things as arrays are addressed in size
        // incremments !!]
    return 1 + findStringLengthRecursively((str + 1));
}
long long int findDigitsRecursivelyWithInt(long long int number) {
  if (number == 0)
    return 1;
  else {
    long long int div = number / 10;
    long long int count = 1 + findDigitsRecursivelyWithInt(div);
    return count;
  }
}