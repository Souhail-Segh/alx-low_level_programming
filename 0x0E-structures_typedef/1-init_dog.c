#include "dog.h"
#include <string.h>

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
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
}
