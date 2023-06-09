#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int countNode = 0;
	listint_t *now = *head;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(now);
		return (1);
	}

	while (now != NULL && countNode < index)
	{
		prev = now;
		now = now->next;
		countNode++;
	}

	if (now == NULL)
	{
		return (-1);
	}

	prev->next = now->next;
	free(now);

	return (1);
}
