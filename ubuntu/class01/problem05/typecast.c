#include <stdio.h>

int main()
{
    int v1 = 10, v2 = 30;
    float result;
    // implicit typecasting, but maybe one would need explicit
    float result1 =(float)  v2/v1;
    float impl = v2/v1;
    result = (float) v1/v2;
    printf("Should result , but explicit %f\n", result);
    printf("explicit on top: %f\n", result1);
    printf("Implicit typecasting gives: %f\n",impl);
}
// room 132 or 123 or 129. One on the right and the other on the left.
// the one on the left is where we headed