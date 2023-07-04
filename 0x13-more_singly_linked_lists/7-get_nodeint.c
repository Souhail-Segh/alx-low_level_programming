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

	node = malloc(listint_t);
	if (head == NULL || node == NULL)
		return (NULL);

	node = head;

	i = 0;
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
