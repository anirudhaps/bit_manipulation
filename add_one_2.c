#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = 0;

    if (argc != 2) {
        printf("Usage: ./addone2 <argument>\n");
        exit(EXIT_FAILURE);
    }

    x = atoi(argv[1]);
    printf("(%d + 1) = %d\n", x, -(~x));
    return 0;
}
