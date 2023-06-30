#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strcpy - copies a string fron src to dest
 * @dest: a pointer in which the src is copied
 * @src: a string to copy
 *
 * Return: None
 */
void _strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

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
			_strcpy(dog->name, name);
		else
		{
			free(dog->name);
			dog->name = NULL;
		}
	}
	else
		dog->name = NULL;

	if (owner != NULL)
	{
		dog->owner = malloc(sizeof(owner));
		if (dog->owner != NULL)
			_strcpy(dog->owner, owner);
		else
		{
			free(dog->owner);
			dog->owner = NULL;
		}
	}
	else
		dog->owner = NULL;
	dog->age = age;
	return (dog);
	}
	else
	{
		free(dog);
		return (NULL);
	}
}
