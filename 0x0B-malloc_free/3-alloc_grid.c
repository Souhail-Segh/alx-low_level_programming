#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - 2D matrix
 * @width: width
 * @height: height
 * Return: 2D matrix if succed, NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **m, i, j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	while (i < height)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (; i >= 0; i--)
				free(m[i]);

			free(m);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}

	return (m);
}
