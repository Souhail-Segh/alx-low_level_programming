#include "lists.h"

/**
 * listint_len - a function that calculate number of nodes
 * @h: a node
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
