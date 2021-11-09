# limit.h

The `limit.h` header file represents a few gauges on size of datatypes.  
One such gauge is the `sizeof` operator.

## sizeofs

`sizeof` is an operator, which, I believe returns an unsigned long integer with the value of the number of bits used to represent a data type in c. I.e how much memory is allocated for the datatype on init.

Hence, when the following code is run:

```c
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int c;
    printf("%s", sizeof c);
    return 0;
}
```

An error is produced, asking for `%ld` which is the format specifier for long decimal I would infer.

The following tests:

1. `sizeof` returns different values for integers depending on system
   1. `sizeof` `int` could either be 2byte,or 4byte. Depending on pc.
   2. in this case, I have int to be 4byte

# shorts, longs, signs and unsigns

a short is basically less space for a value.

1. `sizeof short int` returns 2byte in this case, which makes sense when you think of it. (2byte is minimum so `sizeof short int === sizeof int` if your `sizeof int` is 2byte)
2. `sizeof long int` - returns 8bytes, twice the int size.

For signs one has to think in terms of twos complement

This means there are two ways of representing an integer: completely positive, or with negatives.
For context with all these sizes: Remember that an integer is a subset of a decimal which is simply discretised form of the decimal continuous signal/interval.

## signed

For the signed int, there is a chance of using negative values, hence reducing the max possible integer since we are in fact doing a direct conversion (this makes more sense when we talk of chars and their signs).

So we use the sign of negative.

In short, the max possible signed int is 2<sup>n - 1</sup> to 2<sup>n - 1</sup> - 1, or however the twos complement works.

maxint for signed is split in two with that function, giving same size, but the ability to use -ves. So we have two versions of the max int, with the positive smaller than the negative by 1 to accommodate the 0.
So, checking things, the following code provides the proper `signed int range` (ints are signed by default, hence why it's `INT_MAX` in this case):

```c
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int c = -INT_MAX - 1;
    printf("%d", c);
    return 0;
}
```

This will return -2147483648, which is the largest **regular** negative integer that is signed, in my case (I have 4byte regular `int`, remember?) hence yours may be different.

Now, going over this limit in the negative spectrum, we get an integer overflow, which essentially means we are going back to our max positive

Think of it like this, say for imagines sake that the integer size was 8bits instead of 4bytes

bit place

```
8 7 6 5 4 3 2 1 0
```

for unsigned `int` (using the proper 8 bits), we get:

```
-8 7 6 5 4 3 2 1 0
 1 0 0 0 0 0 0 0 0
```

For each integer. This representation might not be correct, but the point i am making is that the highest bit place is given the negative value, hence...when we exceed the maxint which stops at a specific bit (the one represented above, as there are no other positive values reducing it), the negative sign is moved to the next bit place, and since we are only using 8bits, we end up with only those eight being captured (they are now all set to one to reduce the next bit place by enough digits to represent the previous bit place incremented by one).
And we interpret them as positive, giving a false, and modulus-like value of 2147483647. Going in cycles.

In conclusion, the signed range is: -2147483648 to 2147483647, looping at end for 4byte int (yes, its byte. i've been saying bit since as that allowed me to properly visualise it. Scale things up to 4bytes to give you the proper numbers (32bits)), at least in my case - hail 4byte int linux.

## unsigned

TO show it in c:

```c
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    unsigned int c = UINT_MAX;
    printf("%u", c);
    return 0;
}

```

We find that the max `unsigned int` is: 4294967295. Which still gives a specifier error as `%ld` doesn't expect any thing less than a `long` (this is a hack). If you use `%d`, you quickly realise you get an answer of -1. Which is correct as the value returned is the value obtained after passing the max negative value and getting all the way back to the positive or essentially, adding the two up.

Now, we have a proper specifier `%u`, which I used above and it gives the value above, which is the proper value for `4byte int`. This is obtained by simply going 2<sup>n</sup> , where n is our number of bits.
That is the concept of signed and unsigned with their maxes.
Of course, I got into the max here so I could illustrate how the concept works. the maximum integer depends on your `int` size, and same goes for your max `short int` and `long int`. As long as you have the size, you should have a good inkling of the signed , unsigned and so on.
A similar concept works for chars too.
The heirarchy is thus: `short int <= int < long int `

ALso, signed represents the whole integer set. While unsigned is using the set of positive integers only

## max possible int

As discussed above, maximums are possible, given how the data is structured. In my case I have a 4byte `int` so I can show differences in bands:

Using limits.h, we can find things like:

1. `INT_MAX` - unsigned: 4294967295, signed: 2147483647
2. `LONG_MAX` - unsigned: 18446744073709551615 , unsigned: 9223372036854775807

So on and so forth.
For the format specifiers, we can chain things like: `lu` or `ld` for long unsigned and long integer and same goes for variable definitions too - note that both of them overflow when used incorrectly, so be warned. Hence we can have: `long long int` , using just like an operator. -- They are!

Note: I hit a hard limit for the operators as largest possible int is 8bytes, so chaining more won't get you more... and shortest possible int is 2bytes.
