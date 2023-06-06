#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *now;

	if (head == NULL)
		return;

	while (*head)
	{
		now = (*head)->next;
		free(*head);
		*head = now;
	}

	*head = NULL;
}

