// given a number, sum up the digits.

#include <stdio.h>
#include <stdlib.h>

int main() {
  long long int sum = 0;
  long long int randomNumber = rand() % 34242;
  long long int randomNumberCopy = randomNumber;
  // given this number, display the sum of its digits.

  do {
    // first, extract the last digit
    long long int lastDigit = randomNumber % 10;
    // add it to sum
    sum += lastDigit;
    // then, remove the last digit
    randomNumber /= 10;
  } while (randomNumber > 0);
  printf("The number was  %lld\n", randomNumberCopy);
  printf("Sum of digits %lld\n", sum);
  return 0;
}