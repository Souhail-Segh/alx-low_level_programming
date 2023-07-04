#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specific index
 * @head: first node in the linked list
 * @index: index of the node wanted
 *
 * Return: pointer to the node wanted, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;

	if (index == 0)
		return (node);

	i = 0;
	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (!node)
		return (NULL);
	return (node);
}
