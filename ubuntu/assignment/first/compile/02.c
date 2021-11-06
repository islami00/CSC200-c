// ID : 201103018 Dept : Computer Science

#include <stdio.h>

int main()

{
    int z = 100;
    int sum = 0;
    // The code :
    // while (z >= 0)
    // sum += z;
    // Has two semantic errors in it. Viz :
    // 1. The loop has no proper way of reaching completion as z will always be greater than 100,
    //    leading to an infinite loop.
    // 2. This is becuase z never decreases so we're actually calculating a running sum of 100s.
    // A solution to that is to decrease z so the loop reaches completion eventually
    while (z >= 0)
    {
        sum += z;
        z--;
    }
    return 0;
}