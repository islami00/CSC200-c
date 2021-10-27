# Reqs

1. Main function is entry poit
2. Usually returns an int for result.

# Format specifiers.

1. %d : decimals
2. %f: float

# Functions

TO accept input:

1. `scanf`: a unix friendly version of `scan`
2. `scanf`: good ol scanf

# Operators in c

1.  +=, -=, \*=,/=,%=. The usual

# Errors

THis is handled by vscode, but the goal is: Learn to read stack traces.
C is declarative, so stack traces should be clear and easy to trace.

Different types:

1. Logical : Infinite loop: do not run recursive functions in the cloud: do not run recursive functions in the cloud.
2. syntactical: picked up by compiuler

# Data types

## Primary

1. Int: (signed/unsigned )(2,4bytes)

## Yser defined

1. Typedef: used to rename e.g

```c
int main(){
    typedef int integer;
    integer c = 19;
    printf("%d",c);
}
```

3. enum, struct,

# Other operators.

1. preincrement<`++a`>: increase and assign. e.g:
2. postincremment <`a++`>: use current value in _expression_ then increment

# comparisoon

1. &&
2. ||
3. !=
4. ==
5. !
6. <,>,>=,<=


**Note** Relation operators are detailed later.

# Operator precendence

1. ++
2. --
3. (),*, /, %, +, -
4. <<, >>