#include <stdio.h>

struct cust {
  int acnt;
  char name[90];
  int balance;
};

void balance(struct cust* arr);
void addB(struct cust* arr);
void clearBuff();
int main() {
  // get customers
  struct cust custs[2];
  for (int i = 0; i < 2; i++) {
    printf("Enter your name ");
    // can also refactor to fgets. Then we won't need \n when printing.
    scanf("%[^\n]", custs[i].name);

    printf("Enter your accnt no. ");
    scanf("%d", &custs[i].acnt);
    printf("Enter your balance ");
    scanf("%d", &custs[i].balance);
    clearBuff();
  }
  balance(custs);
  addB(custs);

  return 0;
}

void balance(struct cust* arr) {
  printf("Customers with balance less than 200 are: \n");
  for (int i = 0; i < 2; i++) {
    int bal = arr[i].balance;
    if (bal > 200) continue;
    printf("%s\n", arr[i].name);
  }
}

void addB(struct cust* arr) {
  printf("New balance of customers with balance greater than 1000\n");
  for (int i = 0; i < 2; i++) {
    int bal = arr[i].balance;
    if (bal > 1000) {
      arr[i].balance += 100;
      printf("New bal %i %d\n", i + 1, arr[i].balance);
    }
  }
}

void clearBuff() {
  char ret = getchar();
  if (ret != '\n') clearBuff();
}