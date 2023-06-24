#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate with check flag failure
 * @b: the size of memory needed
 * Return: return a pointer of size b, exit(98) if failure
 */

void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);
	if (f == NULL)
	{
		exit(98);
	}

	return (f);
}
