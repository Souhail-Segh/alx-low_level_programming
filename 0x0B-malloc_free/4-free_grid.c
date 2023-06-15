#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2D matrix
 * @grid: 2D matrix, not necessary carre
 * @height: height dimension of the matrix
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
