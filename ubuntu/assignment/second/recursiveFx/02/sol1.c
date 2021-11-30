#include <stdio.h>

long long int findDigitsRecursively(long long int number);
int main() {
  // overflow problem - limit is 20 digits
  long long int num;
  printf("Enter a number");
  scanf("%lld", &num);
  long long int digits = findDigitsRecursively(num);
  printf("Digits are: %lld", digits);
  return 0;
}

long long int findDigitsRecursively(long long int number) {
  if (number == 0)
    return 1;
  else {
    long long int div = number / 10;
    long long int count = 1 + findDigitsRecursively(div);
    return count;
  }
}