#include "function_pointers.h"

/**
 * int_index - comparaison of two values and returning first rigth index
 * @array: array of integers
 * @size: the size of the array
 * @cmp: comparaison function
 * Return: the first index where it match, else return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
