#include <stdio.h>
int main(int argc, char const *argv[])
{

    int rowLen = 5;
    int colLen = 5;
    float arr[5] = {1, 2, 3, 4, 5};
    // why take ownership??
    float arrArr[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%.1f\n", arr[i]);
    }
    int row, column;
    for (row = 0; row <= rowLen; row++)
    {
        for (column = 0; column <= colLen; column++)
        {
            printf("%.1f\t", arrArr[row][column]);
        }
        printf("\n");
    }
    return 0;
}
