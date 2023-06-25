#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - a function to allocate memory of zeros
 * @nmemb: the size of array
 * @size: the size of elements in the array
 * Return: a pointer of nonr defined type, NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void **arr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = (void *) malloc(nmemb);
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < nmemb)
	{
		arr[i] = malloc(size);
		i++;
		if (&arr[i] == NULL)
		{
			while (i != 0)
			{
				free(arr[i]);
				i--;
			}
			free (arr[0]);
			free(arr);
			return (NULL);
		}
	}
	while (j < nmemb)
	{
		arr[j] = 0;
		j++;
	}

	return (arr);
}
