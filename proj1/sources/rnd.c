#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{

    printf("%s Yo", argv[0]);
    remove("rnd.exe");
    return 0;
}
