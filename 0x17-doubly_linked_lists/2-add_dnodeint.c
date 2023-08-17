#include "lists.h"

/**
 * add_dnodeint - add node to the beggining
 * @head: a doubly linked struct
 * @n: the value to be added in the new node
 *
 * Return: the new struct, NULL if failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
