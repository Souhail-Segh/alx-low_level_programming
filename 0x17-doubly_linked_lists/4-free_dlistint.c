#include "lists.h"

/**
 * free_dlistint - free a double linked struct
 * @head: double linked struct to free
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			if (head->prev != NULL)
			{
				free(head->prev);
			}
			head = head->next;
		}
		free(head->prev);
		free(head);
	}
}
