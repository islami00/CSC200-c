**ID: 201103018 Dept: Computer Science**

# Question One

```c
#include <stdio.h>

int main()

{
    // declare sum,x;
    int sum,x;
    // initialize sum,x to 0,1 respectively.
    x=1;
    sum=0;
    // increment sum by x
    sum+= x;
    // print
    printf("The sum is %d", sum);

    return 0;
}
```

# Question two

The code:

```c
while ( z >= 0 )
sum += z;
```

Has two semantic errors in it. Viz:

1. The loop has no proper way of reaching completion as z will always be greater than 100, leading to an infinite loop.
2. This is becuase z never decreases so we're actually calculating a running sum of 100s.

A solution to that is to decrease z so the loop reaches completion eventually

```c
    while (z >= 0)
    {
        sum += z;
        z--;
    }
```

# Question three

## Psuedocode for a

```
1. start
2. let n1,n2
3. enter n1 and n2
4. sum = n1 + n2
5. print "the sum is " sum
6. end
```

## Pseudocode for b

<!-- pseudocode isn't strongly typed, hehe -->

```
1. start
2. let n1, n2 and largest
3. enter n1 and n2
4. if n1 is equal to n2 , largest = "neither of the two is greater, the numbers are equal"
5. if n1 > n2 , largest = n1
6. if n2 > n1 , largest = n2
7. print largest
8. end

```

## pseudocode for c

```
1. start
2. let x, sum
3. sum = 0
4. enter x
5. if x >= 1, go to line 9
6. if x = -1 , go to line 11
7. if x < 1 , print "You can only enter positive numbers"
8. go to line 4
9. sum = sum + x
10. go to line 4
11. print sum
12. end
```
