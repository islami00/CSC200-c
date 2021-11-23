# Functions can call themselves - recursion

# NOTE

**Midterm exam in two weeks with all material incl.**

f may call g which calls f, still makes it recursive.
Lot of math is recursive.

## Factorial

```c

int factorial (int n)
{
    if(n == 0)
        return 1;
    else
        return (n * factorial(n-1));
}
```
