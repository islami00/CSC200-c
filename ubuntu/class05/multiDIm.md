# Abstract

A multidimensional array is an "Array of arrays"
IN TS:

```TS
const a: [string,string][];
// or
const a: string[][]
```

Now, let's visualise that in c.
IN js, we define it that we'll have a list of tuples.
Or we define our columns here and then say our records are unbounded.

Now to port to c.

```c
int a[4][2];
```

we first define the number of records we'll have. [4].
Then we define the number of columns each record will have [2];
Typing is implicit, as we said each will be an int.

Hence,

```c
int a[4][2];
```

translates to:

```TS
const a: [Number,Number][]
```

In typescript.

<!-- NOnesense from here -->

So, remember, multidimensional arrays are defined as: array[firstDim][seconddim][3rdDim]...

Or in 2d: array[rows][columns]
or array[records][fields]
or array[y][x]...

Hence why we say the arrays in c behave like matrices at this point.

CUz if you'll notice, the typings in TS go in increasing order.

Now, think about this.
Going from top to bottom is where we start.
First dim = y
Then we go left to right.
Second dim = x
SHit bro.
I'll get back to visualising this.

<!-- To here -->

But remember: "array of arrays." Think of your data like that.

## Finally visualising it

Now, the concept is basic. we take something repeating patterns e.g (startdate, endDate) and construct a list of such repeating patterns.
Think of it as eery objects. Or objects without labels.
