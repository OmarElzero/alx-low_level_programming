#include "main.h"
/**
 *  print_alphabet_x10 -print ascii in lower case x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, b;
	for ( b = 0; b < 10; b++)
{
	for ( i = 97; i <= 122; i++)
{
	_putchar('0'+i);
}

}
	_putchar('\n');
}
