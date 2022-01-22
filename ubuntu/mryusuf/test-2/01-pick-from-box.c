#include <stdio.h>
#include <stdlib.h>
int main() {
  struct number {
    int size;
    //   A shape can be: 0: square, 1: circle, 2: triangle
    int shape;
  };
  // Create an arbitrary box of numbers to represent the given box.

  struct number box[20];
  // Fill the box with random numbers.
  for (int i = 0; i < 20; i++) {
    box[i].size = rand() % 10;
    box[i].shape = rand() % 3;
  }

  for (int i = 0; i < 20; i++) {
    // random negation
    int negateAt = rand() % 20;
    box[negateAt].size *= -1;
  }
  // Our question starts here. We are given a box of numbers. box.
  // Pick a random number from the box.
  // Add that to your sum . (Add that to the next number)
  // If you encounter a negative number, stop.
  int sum = 0;
  int count = 0;
  for (int i = 0; i < 20; i++) {
    int randomInt = rand() % 20;
    int randomeNumber = box[randomInt].size;
    if (randomeNumber < 0) break;
    sum += randomeNumber;
    count++;
    printf("Picked number %d\n", randomeNumber);
  }
  float average = (float)sum / count;
  printf("Average number of values %f\n", average);
  printf("Count of values %d\n", count);

  return 0;
}