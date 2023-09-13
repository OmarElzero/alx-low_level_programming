#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
{
	printf("+");
	return (1);
}
	if (n == 0)
{
	printf("0");
	return (0);
}
	if (n < 0)
{
	printf("-");
	return (-1);
}
}
