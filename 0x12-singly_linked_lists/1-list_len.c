#include "lists.h"
#include <stdio.h>

/**
 * list_len - calculate the number of nodes
 * @h: a node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
