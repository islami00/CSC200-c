#include <stdio.h>
#include <stdlib.h>
// initialise mutex. I.e lock that is set before using shared memory.
// Lock that allows us to set  vars, then release after use.
// ============================= Init state
int mutex = 1;
int full = 0;    // i.e our slot is empty.
int empty = 10;  // -> we have 10 free slots
int x = 0;       // change the value of slot with this
// ==============================

// producer - no params. Like main (could pass args though)
void producer() {
  --mutex;  // lock. Ideally this starts our critical section
  // increase number of full. i.e we produced.
  ++full;
  // decrease empty
  --empty;
  // put values in em
  ++x;
  // print what the producer has.
  printf("\n Producer produces item %d",
         x);  // It's producing now, and in turn reducing our empty slots

  printf("\nProducer: x=%d, full=%d, empty=%d\n", x, full, empty);
  // release lock
  ++mutex;
}
void consumer() {
  --mutex;
  // decrease full
  --full;
  // increase empty
  ++empty;
  // print what the consumer has. Right before consumption. Cuz produce retains
  // state, consume destroys.
  printf("\nConsumer consumes item %d",
         x);  // It's consuming now, and in turn increasing our empty slots.
              // What it shows is saying: Producer will produce item4 (or x+1)
              // if consumer gobbledup 3 (or x)
  printf("\nConsumer: x=%d, full=%d, empty=%d\n", x, full, empty);
  // remove values
  --x;
  // release lock
  ++mutex;
}

// Note: our mutex is always the same when no critical section is occuring. So,
// both can do what they want
void main() {
  // look at two cases. Producer. Consumer. Both.
  // we don't know n times producers/processes will use.
  int choice, n;
  // this should be out of the for loop to avoid irregular loop - put it once so
  // we remember. WE could make it multiple for entropy
  printf("\n Enter how many times you want the process to run");
  scanf("%d", &n);
  for (size_t i = 1; i > 0;
       i++)  // infinite loop?? or one time loop?? - Infinite. Switch breaks. We
             // never leave the loop. Replace with while true.
  {
    // Menu. We might want to consume only or produce or both.
    printf(
        "\n Enter 1 for producer, 2 for consumer, 3 for both, and 4 to exit");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        if ((mutex == 1) && (empty != 0)) {
          // copilot init: (mutex == 1) && (full == 0) && (empty ==
          // 10). But last two are implied by empty!=0
          for (size_t i = 1; i <= n; i++) {
            producer();
          }

        } else
          printf("\n Buffer is full");  // it doesn't necessarily have to be
                                        // producer. Anyone else could occupy it
        break;
      case 2:
        if ((mutex == 1) && (full != 0)) {
          for (size_t i = 1; i <= n; i++) {
            consumer();
          }
        } else
          printf("\n Buffer is empty");
        break;
      case 3:
        if ((mutex == 1) && (full != 0) &&
            (empty != 0)) {  // ha! i'd like to see this execute! It does cuz they cover up for each other
          for (size_t i = 1; i <= n; i++) {
            producer();
            consumer();
          }
        } else
          printf("\n Buffer is either fu");
        break;
      default:
        printf("\n ERR: Invalid choice");
        exit(0);
        break;  // this is unreachable
    };
  }
}

// Test one1: It works!
// I thought all was well till I tried case 4! Since we run consumer and
// producer concurrently, we expect either to take what the other has created
// and that's true! See output file for more info. Our state is literally same
// as init