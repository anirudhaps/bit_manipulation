#include <stdio.h>
#include <stdlib.h>

/* Algorithm:
 * 1. Flip all the bits on the right side of the rightmost 0 in x.
 * 2. Flip rightmost 0 in x.
 * 3. Return x (because now x has become x + 1)
 */
int add_one_func(int x)
{
    int one = 1;

    /* The precedence of != is higher then bitwise &. Thus, we put (x & one) 
     * in bracket. If we don't do it, this will be interpreted as: 
     * x & (one != 0).
     */
    while ((x & one) != 0) {
        x ^= one;
        one <<= 1;
    }
    x ^= one;
    return x;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: \n");
        fprintf(stderr, "./add_one <input arg>\n");
        exit(EXIT_FAILURE);
        /* In case of failure, we can exit the program with exit status: EXIT_FAILURE
         * EXIT_FAILURE is defined as -1
         * In case of success, we can exit the program with exit status: EXIT_SUCCESS
         * EXIT_SUCCESS is defined as 0
         */
    }
    printf("(%d + 1) = %d\n", atoi(argv[1]), add_one_func(atoi(argv[1])));
    return 0;
}
