#include "main.h"

/**
 *binary_to_uint - converting binary to unit
 *unsigned int -.
 *@b- const binary
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int num;
	if(!b)
	return (0);
	while(*b != '\0')
{
	if(*b != '0' && *b != '1')
	{return (0);}
	num *= 2;
	num += (*b-'0');
	b++;
}
return (num);
}
