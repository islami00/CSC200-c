# This is a little note on `conio.h`

More details [here](https://www.quora.com/Any-alternative-to-conio-h-in-C-programming)  
But essentailly, the lib files above and `conio.c` are only provided as polyfills if you want to follow word to word.

`conio.h` is deprecated as said in that, and its sole purpose as an import was to prettify the console, which is cool...but limited.

One can use `stdlib.h` with `getchar()` or just `getchar()` as implemented in default or `system('cmd')` calls to do that.

Huh, I just found the hidden sao reference "system call: generate luminous element"

Anyhow, to enable `conio.h`, there are a few polyfills

The first one I've tried requires a bit of tweaking with the base config of the workspace as it is a split library smh.  
Challenge: learn these terms and redo `conio.h` islam style.

So, `conio.c` is included in build, along with including `conio.h`

This gives a little error at the end, so I sought out an alternative  
Oh yeah, source for the [prev](https://www.opensourceforu.com/2014/03/write-conio-h-gnulinux/)

## So, for polyfill1:

1. Add `.\polyfill1\conio.c` to the compile args
2. Uncomment `#include ".\polyfill1\conio.h"`

## Polyfill2:

It's for c++ so, nice [try](https://github.com/zoelabbb/conio.h)

Hence the argument: want to read char from input stream once without return? tweak `getchar` after understanding

## Polyfill3

Use [ncurses](https://tldp.org/HOWTO/NCURSES-Programming-HOWTO/scanw.html#GETCHCLASS) package. I'll try that as a last resort.
Using:

1. [vs packages](https://vcpkg.io/en/getting-started.html)

More on this controversy [here](https://www.daniweb.com/programming/software-development/threads/431310/substitute-for-conio-h-in-linux) and [here](https://www.quora.com/What-is-the-difference-between-using-Turbo-C-and-GNU-C-C++-Is-there-any-real-difference-or-if-I-submit-the-C-file-would-that-be-the-same-thing)  
Huh, what I get from this is windows being well...windows.
