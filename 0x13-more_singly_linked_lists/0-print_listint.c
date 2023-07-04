#include "lists.h"

/**
 * print_listint - a function that print an element in each node
 * @h: a node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
