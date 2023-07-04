#include "lists.h"

/**
 * pop_listint - deletes the first node in a  linked list
 * @head: pointer to the first node
 *
 * Return: the integer has deleted, otherwise 0
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL || *head == NULL)
		return (0);

	temp = *head->next;
	res = *head->n;
	free(*head);
	*head = temp;

	return (res);
}
