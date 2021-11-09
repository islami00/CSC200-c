# Getting started in ubuntu

We already have `gcc`, `g++` and `gdb` installed by default.
I tagged a guide on today, fri Aug20, 2021 at 21:34 on medium on this.

Essentially, gcc is pretty easy going and we can track our file as it is compiled

i.e Think of gcc's flags as pretty ways of saying ok, show me output after x step.

general syntax (from what I have discerned)

` gcc {sub-compiler flags} {source} {general compiler flags}`

Going part by part,
Starting from the bottom, the two on the left and right are not necessary and we can run through the entire compile process leaving us with a file of `source.out` to run in the current directory. Okey dokey.

Some limited fine-tuning, starting from the last:

1. general compiler options.
   1. these tell the compiler when to stop
   2. `-o {customOutput}` : This allows us to specify a different location to store the final step. I.e it is a final step flag (the default action) but it allows us to choose the name of the file and where to store it. This is my go-to
   ```sh
   $ gcc h.c -o ./execs/h
   ```
   That's my dream and it has been my dream for so long.
   NOw I can code here and setup a custom script to clean that wretched directory or even chain it myself.
   ```sh
   gcc h.c -o ./execs/h && ./execs/h && rm ./execs/h
   ```




# for this itself

Thinking of changing the file structure to ./src and have the c files there, or do it in csc102 style and say problem1 then have the execs store in the root.
I feel that is better when it comes to school