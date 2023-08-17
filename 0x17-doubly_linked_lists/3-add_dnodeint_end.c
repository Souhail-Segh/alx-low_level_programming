#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 * @head: a doubly linked struct
 * @n: the value to be added in the new node
 *
 * Return: the new struct, NULL if failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	temp = malloc(sizeof(dlistint_t));
	if (new == NULL || temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	return (*head);
}
