#include "lists.h"

/**
 * insert_nodeint_at_index - delete a  node in a linked list,
 * at a specific position
 *
 * @head: pointer to the first node
 * @index: the position of the node te delete
 *
 * Return: 1 success, -1 failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *start;

	if (!head || !(*head))
		return (-1);
	i = 0;
	start = *head;
	while (*head && i < index)
	{
		if (i == index - 1)
		{
			temp = (*head)->next;
			(*head)->next = temp->next;
			*head = start;
			free(temp);
			return (1);
		}
		*head = (*head)->next;
		i++;
	}
	*head = start;
	return (-1);
}
