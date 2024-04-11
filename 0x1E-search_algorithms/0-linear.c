#include "search_algos.h"

/**
 * linear_search - linear search function of an array of integers
 *
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 * @value: value to search for
 *
 * Return: the index of element if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (size == 0 || array == NULL)
		return (-1);

	index = 0;
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
