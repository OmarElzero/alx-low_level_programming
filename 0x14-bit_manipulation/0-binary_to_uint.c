#include "main.h"

/**
 *binary_to_uint - converting binary to unit
 *unsigned int -.
 *@b:- const binary
 *Return: 0 sucsess
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int num;
	if (!b)
	return (0);

	while (*b != '\0')
{
	if (*b != '0' && *b != '1')
{
	return (0);

	num = num * 2 + (*b++ - '0');
}
}
return (num);
}
