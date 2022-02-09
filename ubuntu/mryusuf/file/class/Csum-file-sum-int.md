## To recap on fscanf

`fscanf` reads from _some stream_, accepting _some format_ as _specified_ in the format specifier string. Then it places it in _some variable_

The same goes for `fprintf`
Imagine it as a superset of `printf` like `gets` and `fgets` that allows for arbitrary streams not just `stdin`.

The corresponding c file sums scores in `StudentScores.txt` and writes to `StudentTotal.txt`, after reversing order of scores and appending the same text it will write to `StudentTotal.txt` to `StudentScores.txt`

Also, this is where the whitespace consuming property of `%d` really shines. No need to worry about `\n` and co. Well, strings are an issue, but oh well right?
~~We could simply pass it to a checker. It should check if the char obtained is less than 0 ( handle negative int), or in the integer range of 0-9. I.e generally less than 9.~~ Nah, that doesn't work cuz the scores aren't being obtained digit by digit
