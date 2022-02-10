## Overview

A few errors in the code.
Fixed it by setting proper ending conditions to loops.
Learned how while loops do eager evaluation.

### On eager eval with getchar

1.  `getchar()` will make the while loop run twice on console input as it'll first get a letter then `'\n'`. Accounted for this by placing a stop condition to `continue` in that case.
2.  Assignment operations return assigned value [stackoverflow](https://stackoverflow.com/questions/16567622/what-is-the-result-of-an-assignment-expression-in-c)
    So c lang writers have style.

### On initial EOF condition

Guess we should actually terminate the loop so we reach `EOF` because `getchar()` shouldnt fail rn hence I see no reason it should spit `EOF`.
Stopping char is `0` because `EOF` is `-1` which evaluates to `'-'` then `'1'` so we have to provide a proper stop. Since it's a char, we compare with `'0'`
_Note_: opening in write mode overwrites the file before anything

### putc not working each time we enter char, and after force stop

The reason this happened was because we never closed the file. You must close the file to write all changes from the opened stream to the file. Also, opening the file in write mode overwrites it with empty file.

_Note_: `putc` is as generic as `fgets`, so it should also work for `stdout`. I tested it myself with a sort of echo.

## Refs

[devdoc-putc](https://devdocs.io/c/io/fputc)
[devdoc-getc](https://devdocs.io/c/io/fgetc)

## Addendum on EOF loop used.

~~Devdocs just showed me why the EOF method didn't work.~~
~~We need to use int to evaluate EOF as a single thing for `getc`. This works on the flipside with `putc` because the binary repr of `'-1'` is same as the integer value (ascii) it is coerced to by accepting it from console as integer.~~
~~Characters are just syntactical suger.~~

The EOF method does not work for getting the input because we are not reading from file, and that loop is specific for reading from files. No hacks can get around that.
_More_: As you said, int and char are equivalent bin representation, so that shouldn't be an error in and of itself.

_More_: EOF is entered using `ctrl+z`. It's `CTL-D` in ubuntu.
