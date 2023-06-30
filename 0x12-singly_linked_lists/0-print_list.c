#include "lists.h"
#include <stdio.h>

/**
 * print_list - print strings of all nodes
 * @h: a node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}

	return (cnt);
}
