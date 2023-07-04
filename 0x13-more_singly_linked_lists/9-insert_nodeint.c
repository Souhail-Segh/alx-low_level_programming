#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a linked list,
 * at a specific position
 *
 * @head: pointer to the first node
 * @idx: the position of the new node
 * @n: int value of the new node
 *
 * Return: pointer to the new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new || !head || !(*head))
		return (NULL);
	i = 0;
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
