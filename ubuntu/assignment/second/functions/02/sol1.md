# Initial Constraints

The main problem here is reversing our number, so that will be the problem tackled. Comparison is trivial.

1. The number must be an `integer`,
2. greater than or equal to zero.
3. It must be represented in decimal ( base 10)

## Mathematical implementation : Modulo.

**Edgecases**

1. When the number starts with zeros. ~~We can introduce a one to start our number with, and increment it alongside the other till we finally subtract it at the end.~~ **Doesn't matter as it results in a case similar to #2**
2. What of : `00100`. This is not in our scope as we define integers only. Hence, `00100 = 100` by definition.
3. Unrelated: Overflow. Solved by other algorithms.

[reference](https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-97c556626ec6)

Before starting, a few key things will be needed for the reversal:

1. The number
2. The `last digit`
3. A template for appending the `last digit`

The concept is simple. A modulo operation always returns the "remainder" which is essentially reducing a number to the range it supports.

With this, we select the range of 10 : 0-9. Which contains all possible digits for any integer place.
This provides us with a way of reducing a number to only the least component satisfying this range: The `last digit`.

With this, we have our second component.

For the third component, we use yet another multiplicative property: carry over.

For base 10 operations, when a number is multiplied by 10, essentially all digits are moved a place forward visually.
So, multiplying our template which will default to 0 by 10, will help create arbitrary space for our new `last digit`. Setting us up for reversal.

With these two in place, we simply need to repeat till the number is exhausted. I.e equal to zero
But wait. the `last digit` is still in the number we had from the start.
To move forward, we use yet another property of integers, the truncation from division.
We do this by dividing the number by 10 leaving us with the `last digit` pushed out (and truncated) and only the rest of the number remaining.

To recap, the steps are:

1. Get the number
2. Extract last digit by modulus division by 10
3. Shift the digits of your template number leftward by one place by multiplying by 10.
4. Append to the template your last digit by taking their sum.
5. Truncate your last digit from the actual number by dividing by 10
6. repeat till your number is exhausted (equal to zero).

Further notes can be made for negative range. Since we are dealing with integers, we remove the negation by multiplying by -1 , hence preserving our modulo algorithm.

```c
int palendromeInt(int number) {
  int pal = 0;
  int lastNumber = 0, reverse = 0, safeNumber = number;
  if (number < 0) safeNumber = number;
  // determine pal
  do {
    // step 1 extract the last number by modulo division in 10.
    lastNumber = safeNumber % 10;
    // step 2 shift reverse forward by one space for all digits
    reverse *= 10;
    // step 3 append last digit to reverse
    reverse += lastNumber;
    // step 4. truncate last digit from number
    safeNumber /= 10;
    // step 5 loop - do while for explanation. Independent of initial run as it remains unaffected.
  } while (safeNumber > 0);
  if (reverse == number) pal = 1;
  return pal;
}


```

# Relaxed constraint - 2

**Note:** remove the >= 0 constraint.

## Mathematical implementation - modulus

Our solution changes slightly.
We simply reverse to our base problem by multiplying by -1.
At the beginning.

**Algorithm**

1. Get the number
2. Multiply the number by -1 to make it positive if it is less than 0.
3. Extract last digit by modulus division by 10
4. Shift the digits of your template number leftward by one place by multiplying by 10.
5. Append to the template your last digit by taking their sum.
6. Truncate your last digit from the actual number by dividing by 10
7. repeat till your number is exhausted (equal to zero).

**Code**
See: [sol1](sol1.c)

```c

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


```

Algorithm:

# Relaxing constraint: Int

Going further and extending our definition to floating points (to quote myself):

<!-- Interesting on html escaping: https://stackoverflow.com/a/47984784/16071410 -->

"_An interesting extension of this would be to implement this with floating point numbers. (I initially thought this was out of scope for the modulo operation, but "floating point" is the key here.) I think an extension would use standard form of numbers to express floating points as integers, storing the power and base separately and applying this algorithm to the base which satisfies its conditions_"
