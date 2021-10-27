# characters in c

Characters in c are represented using 8bits, or 1 byte or 8bits. This is a parallel to integers which are either 2bytes or 4byte

First, the ascii table. Normal, 127bit or table:
![](https://upload.wikimedia.org/wikipedia/commons/1/1b/ASCII-Table-wide.svg)

Complete 128bit or 1byte table: ![](https://upload.wikimedia.org/wikipedia/commons/2/26/Ascii-codes-table.png)

This is used to port characters to bits (and,you guessed it! integers. chars can be ints or rather...you have access to this ability of ascii value comparison)
Now, the character init type is: `char` and this stores only one byte . I.e any data that is > 1byte will return unexpected behaviour. This includes a string (an array of chars).
Hence, you must use '' not "" as the latter is for more than a char
Proof that ints and char values point to the same

```c
#include <stdio.h>
int main()
{
    char var = 65;
    char var2 = 'A';
    printf("%c is same as %c", var, var2);
    return 0;
    // Outputs A is same as A
}
```

This works because of the format specifier, and , generally because they have the same binary representation given their storage values are the same. The reason we are able to do this further, is the format specifier. If we used `%d` with it for `var`, we would obtain the integer representation of our char datatype. Hence, char is stored like int due to encoding, so there are times like these when visually, the two types mix. But the strongly typed nature of c ensures we don't ge this issue.  
Nah, just don't do it. Bad idea. this test says so:

```c
#include <stdio.h>
int main()
{
    char var = 65;
    char var2 = 'A';
    int var3 = 65;
    int test = var == var3;
    printf("%c is same as %c or %d", var, var2, test);
    return 0;
    // returns A is same as A or 1 . 1 meaning it passed
}
```

Also...I just noticed that c does not have a `bool` type.
And, it doesn't matter whether you save as `int` or `char`. Just note that strings aren't enforced by default. Hence, for conditions testing them, use a type guard function if that is not the intended behaviour as if the ascii integer code matches, then it's game over.

Based on our long haul with int, I believe you are now familiar with signed and unsigned concept.
Well, n=1 in the case of char, so we have signed and unsigned ranges with 2s complement.

## Signed and unsigned chars

Disclaimer: It makes no difference between signed and unsigned character as c makes use of the extended ascii table which makes use of the 8th or msb bit.
Note: binary representation on numbers in the twos complement at the point of expansion (i.e everything after the upper bound) is equivalent to the unsigned form assuming the complement was not applied.
This gives a one-to-one mapping for all characters signed to the extended ascii table that is our unsigned domain.

So, signed or unsigned...doesn't matter visually...but it does matter when it comes to conditions and stuff....does it?
I mean, if they are equivalent in binary, then they must be generally equivalent no?
Yeah, I think so.
Conclusion: don't let it bother you...the only real implementation of this is in int where we want extended superpowers of a particular subset

To understand the binary thingy, think of the two's complement of the following and the ascii table as:
a range from 0 - 127 - -128 - -1
and the extended table as a range from 0 - 127 - 255 -- not 56 as the last bit is unused for 9bits
This also tells us sth: -128 upward, is same as 128 upward as the decrements of bits we do for the signed are equivalent to increments of bits in the signed

Hence we see that:- note js weak equals.  
-127 == 129 and -128 == +128, at least in the context above.

Essentially:
-126:
-7 6 5 4 3 2 1 0
1 0 0 0 0 0 0 0
130:
7 6 5 4 3 2 1 0
1 0 0 0 0 0 0 0

Same goes for extremes like -1 and 255.
Note: tests for equality only change when the binary representation change and then it returns an in

## Another downset

extended ascii isn't supported in terminal

# conclusion:

each negative value maps to positive value in extended ascii. And range exceeding loop is equivalent here.

Also, c is very [nuanced](https://www.cprogramming.com/tutorial/unicode.html) Taking off the pedals with raw gcc costs one this. Switch if possible

**TO-DO: setup utf-8 mapping like in this qn**
