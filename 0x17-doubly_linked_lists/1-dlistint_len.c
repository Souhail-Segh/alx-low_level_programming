#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - calculates the number of nodes
 * @h: a doubly linked structure
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
