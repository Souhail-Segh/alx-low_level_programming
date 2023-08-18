#include "lists.h"

/**
 * get_dnodeint_at_index - get the node in a specific index
 * @head: linked struct
 * @index: the index of the node wanted
 *
 * Return: the node wanted, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	i = 0;
	while (i < index)
	{
		i++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
