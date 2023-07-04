#include "lists.h"

/**
 * add_nodeint - add node in first
 * @head: node to first node
 * @n: the integer value in the new node
 *
 * Return: the new linked list, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (1)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		return (new);
	}
	return (NULL);
}
