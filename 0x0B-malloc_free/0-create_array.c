#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars.
* @size: size of the array we chose.
* @c: is a storaged char
*back again 
* Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
char *letter;
	unsigned int i;

	if (size == 0)
		return (NULL);

	letter = malloc(sizeof(c) * size);

	if (letter == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		letter[i] = c;

	return (letter);
}
