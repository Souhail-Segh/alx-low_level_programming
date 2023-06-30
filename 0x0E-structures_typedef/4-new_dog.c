#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - initialize a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer of struct dog, NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
	{
	if (name != NULL)
	{
		dog->name = malloc(sizeof(name));
		if (dog->name != NULL)
			dog->name = name;
		else
			dog->name = NULL;
	}
	else
		dog->name = NULL;

	if (owner != NULL)
	{
		dog->owner = malloc(sizeof(owner));
		if (dog->owner != NULL)
			dog->owner = owner;
		else
			dog->owner = NULL;
	}
	else
		dog->owner = NULL;
	dog->age = age;
	return (dog);
	}
	else
		return (NULL);
}
