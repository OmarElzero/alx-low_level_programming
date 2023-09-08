#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and prints its last digit
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

	/* Get the last digit of the random integer using modulus */
	int last_digit = n % 10;

	/* Prints the last digit of the random integer and its value */
	printf("Last digit of %d is ", n);

	if (last_digit > 5)
{
	printf("%d and is greater than 5\n", last_digit);
}
	else if (last_digit == 0)
{
	printf("%d and is 0\n", last_digit);
}
	else
{
	printf("%d and is less than 6 and not 0\n", last_digit);
}

	return (0);
}
