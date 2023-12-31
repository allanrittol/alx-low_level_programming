#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point for struct dog
 * @d: dog to be init
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
