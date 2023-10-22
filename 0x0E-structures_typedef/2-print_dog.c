#include "dog.h"
#include <stdio.h>
/**
 *print_dog - intalizing dog struct
 *
 * @d: struct name
 *Return - no return
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))

			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (!(d->owner))

			printf("Owner: (nil)\n");
		else
			printf("Owner:%s\n", d->owner);

			printf("Age: %f\n", d->age);
	}
}
