#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initialize a dog structure
 * @d: a pointer to a struct to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return - none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	if (name != NULL)
	{
		d->name = malloc(sizeof(name));
		if (d->name != NULL)
			d->name = name;
		else
			d->name = NULL;
	}
	else
		d->name = NULL;

	if (owner != NULL)
	{
		d->owner = malloc(sizeof(owner));
		if (d->owner != NULL)
			d->owner = owner;
		else
			d->owner = NULL;
	}
	else
		d->owner = NULL;
	d->age = age;
	}
}
