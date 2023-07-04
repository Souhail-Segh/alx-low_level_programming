#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: adress of first node
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
