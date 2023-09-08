#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and prints its sign
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
    int n;

    /* Initializes the random number generator with the current time */
    srand(time(0));

    /* Generate a random integer between -2147483647 and +2147483647 */
    n = rand() - RAND_MAX / 2;

    /* Prints the sign of the random integer using if/else statements */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return 0;
}
