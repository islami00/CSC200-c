#include <stdio.h>

// Palendrome for integers. Uses modulo. No length requirement.
int palendromeInt(int number) {
  int pal = 0;
  int lastNumber = 0, reverse = 0, safeNumber = number;
  // mutate clone to bring back to base +ve reqs.
  if (number < 0) safeNumber *= -1;
  do {
    // step 1 extract the last number by modulo division in 10.
    lastNumber = safeNumber % 10;
    // step 2 shift reverse forward by one space for all digits
    reverse *= 10;
    // step 3 append last digit to reverse
    reverse += lastNumber;
    // step 4. truncate last digit from number
    safeNumber /= 10;
    // step 5 loop - do while for explanation. Independent of initial run as it
    // remains unaffected.
  } while (safeNumber > 0);
  if (reverse == number) pal = 1;
  return pal;
}
int main() {
  int palNumber;
  printf("Enter a number: ");
  scanf("%d", &palNumber);
  int result = palendromeInt(palNumber);
  if (result == 1)
    printf("The number is a palendrome");
  else
    printf("The number is not a palendrome");
  return 0;
}