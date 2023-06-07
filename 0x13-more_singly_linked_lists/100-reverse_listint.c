#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 *
 * Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *now = *head;
	listint_t *next = now->next;

	while (now != NULL)
	{
		next = (*head)->next;
		now->next = prev;
		prev = now;
		now = next;
	}

	*head = prev;

	return (*head);
}

