# IT IS FINALLY OVER!

Thanks to this excellent stackoverflow answer: [Why do I have to use gets() function twice in a row? [duplicate]](https://stackoverflow.com/a/65493922/16071410) , I have finally understood the purpose of the scanf function and what's really going on with inputs in c. **Read it first, but still:** Scanf is an _input parsing_ function. Meaning: The string you give it is a description of what it should grab from the line it reads. In this case, it is from the stream it reads which called the `stdin` stream. Hence, it reads that stream from the beginning when called and grabs only what it's format string tells it to, leaving the rest.

Thus, this piece of code:

```c
scanf("%d", &x);
```

Only reads the integer, and still leaves the stray newline character you entered by hitting `enter` in the stream. See how this can get messy for a stream reading function like `gets`? Sure, `gets` is bad and all that, but it works! and `scanf` just makes us confused as to how it works!. I'd also go as far as to say: Tutorials should take this into note. Ensure that `scanf` works properly by using this syntax instead for linux:

```c
 scanf("%d\n", &x);
```

Sure, there's the issue of newline character detection in windows, but that's not our concern right now. use that for linux when using `scanf` with other input reading functions. Don't underestimate any `scanfs`.

PS: I'll review this later on and include a general function that actually makes sense for this use case, but right now, I just wanted to state my joy at this discovery.

#### Footnote:

While trying to add a button to the enter block, I realised you can add classes to markdown using this [stackoverflow answer](https://stackoverflow.com/a/40705194/16071410). Exhilarating.
