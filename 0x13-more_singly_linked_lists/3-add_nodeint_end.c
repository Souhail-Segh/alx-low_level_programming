#include "lists.h"

/**
 * str_length - calculate the length of a string
 * @str: string
 *
 * Return: length of a string
 */

int str_length(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_nodeint_end - add node at the end of linked list
 * @head: the first node to a linked list
 * @n: the integer value
 *
 *  Return: the first node, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int len;
	list_t *new, *browser;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (*head);
	}
	browser = malloc(sizeof(list_t));
	if (browser == NULL)
	{
		free(browser);
		return (*head);
	}
	len = str_length(str);
	new->len = len;
	new->str = strdup(str);
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
