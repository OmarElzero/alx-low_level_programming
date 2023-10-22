#include "dog.h"
/**
 *init_dog - intalize the variable 
 *@d - name of struct pointer
 *@name - pointer to name of the dog
 *@age - age of the dog
 *@owner - owner who owns the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
