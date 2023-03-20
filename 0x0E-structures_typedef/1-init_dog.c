#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of a type of struct dog
 * @d: dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner= owner;
		d->age= age;
	}
}
