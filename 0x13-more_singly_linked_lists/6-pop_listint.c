#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer
 *
 * Return: 0 if the list is empty or head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *now;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	now = (*head)->next;
	free(*head);
	*head = now;

	return (n);
}
