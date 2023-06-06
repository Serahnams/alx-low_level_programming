#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}

	return (sum);
}
