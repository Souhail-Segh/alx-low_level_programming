#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node in a specific index
 * @head: linked struct
 * @index: the index of the node wanted
 *
 * Return: 1 if succed, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	temp = *head;
	i = 0;
	while (i < index)
	{
		i++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next == NULL && temp->prev == NULL)
	{
		free(temp);
		return (1);
	}
	if (temp->next != NULL && temp->prev != NULL)
	{
		(temp->prev)->next = temp->next;
		(temp->next)->prev = temp->prev;
	}
	else if (temp->next == NULL)
	{
		(temp->prev)->next = NULL;
	}
	else if (temp->prev == NULL)
	{
		(temp->next)->prev = NULL;
	}
	temp->next = NULL;
	temp->prev = NULL;
	free(temp);
	return (1);
}
