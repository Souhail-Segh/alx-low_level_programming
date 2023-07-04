#include "lists.h"

/**
 * add_nodeint_end - add node at the end of linked list
 * @head: the first node to a linked list
 * @n: the integer value
 *
 *  Return: the first node, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *browser;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (*head);
	}
	browser = malloc(sizeof(listint_t));
	if (browser == NULL)
	{
		free(browser);
		return (*head);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	browser = *head;
	while (browser->next != NULL)
		browser = browser->next;
	browser->next = new;
	return (*head);
}
