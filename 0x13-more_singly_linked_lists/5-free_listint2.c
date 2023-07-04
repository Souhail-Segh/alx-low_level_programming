#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: adress of first node
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
