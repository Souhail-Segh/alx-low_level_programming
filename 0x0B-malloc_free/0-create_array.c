#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create and initialise array with malloc
 * @size: size of the array
 * @c: the character to initialise the array with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	if (size <= 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
