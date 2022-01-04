# Defs

Basic definition is that it is a character array.
Just like jeff said, it is terminated by null char.

# Weird thing of c.

We have `%s` format specifier in printf.
But no string primitive.

The %s is specific though, it can't take any whitespace after the string itself.

Use string library functions.
`gets` and `puts`.

`fgets` and `fputs` are more limited versions that don't take infinite buffer.

# Commons

In addition to puts and gets,
we have `stringlen`, `concat` and `copy`
