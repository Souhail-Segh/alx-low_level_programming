#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
 * add_node - add node at first node
 * @head: linked list
 * @str: string of a node
 *
 * Return: first node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (*head);
	}
	len = str_length(str);
	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
