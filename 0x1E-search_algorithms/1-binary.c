#include "search_algos.h"

/**
 * print_subarray - Print a sub array
 * @array: an array to print a sub-array from
 * @start: first index
 * @end: last index
 *
 * Return: None
 */

void print_subarray(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Binary Search of an array of integers.
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: return the index of the element searched, otherwise -1.
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min, max, medium;

	if (array == NULL || size == 0)
		return (-1);

	min = 0;
	max = size - 1;
	medium = max / 2;
	print_subarray(array, min, max);
	if (array[medium] == value)
		return (medium);
	while (min < max)
	{
		if (value < array[medium])
		{
			max = medium - 1;
		}
		else
		{
			min = medium + 1;
		}
		medium = (max + min) / 2;
		print_subarray(array, min, max);
		if (array[medium] == value)
			return (medium);
	}
	return (-1);
}
