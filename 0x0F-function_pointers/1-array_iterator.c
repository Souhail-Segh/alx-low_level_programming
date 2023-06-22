#include "function_pointers.h"

/**
 * array_iterator - display a list of integers in normal and hexa
 * @array: list of integers to be displayed
 * @size: the size of the list
 * @action: the function that do display integers
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}
}
