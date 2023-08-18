#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all nodes values
 *
 * @head: the linked struct
 * Return: the sum, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
