#include "lists.h"

/**
 * sum_listint - calculates the sum of all the integers in linked list
 * @head: first node of a  linked list
 *
 * Return: sum of all int values in a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
