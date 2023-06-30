#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - free a linked list
 * @head: adress of first node
 *
 * Return: none
 */

void free_list(list_t *head)
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
