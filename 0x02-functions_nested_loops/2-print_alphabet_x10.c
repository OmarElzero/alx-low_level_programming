#include "main.h"
/**
 *print_alphabet_x10-Prints the alphabet 10 times
 * Description: Prints print_alphabet_x10
 */
void print_alphabet_x10(void)
{

int Count;
	char LChar;

	for (Count = 0; Count < 10; Count++)
	{
		for (LChar = 'a'; LChar <= 'z'; LChar++)
			_putchar(LChar);

		_putchar('\n');

	}
}
