#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the informations of a dog
 * @d: the structure containing the infos of a dog
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		printf("\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
		printf("\n");
	}
}
