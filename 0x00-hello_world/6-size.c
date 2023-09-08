#include <stdio.h>
/**
 *main - hi there
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
double d;
char c;
long int li;
long long int lli;
float f;

	printf("the size of an int is:%lu.\n", (unsigned long)sizeof(i));
	printf("the size of an double is:%lu.\n", (unsigned long)sizeof(d));
	printf("the size of an char is:%lu.\n", (unsigned long)sizeof(c));
	printf("the size of a long int is:%lu.\n", (unsigned long)sizeof(li));
	printf("the size of a long long int is:%lu.\n", (unsigned long)sizeof(lli));
	printf("the size of a float is:%lu.\n", (unsigned long)sizeof(f));

	return (0);
}
