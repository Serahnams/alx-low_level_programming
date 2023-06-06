#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t list
 * @head: pointer
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	listint_t *now - *head;

	if (index == 0)
	{
		*head = now->next;
		free(now);
		return (1);
	}

	unsigned int countNode = 0;

	while (now != NULL && countNode < index - 1; countNode++)
		now = now->next;

	if (now == NULL || now->next == NULL)
		return (-1);

	listint_t *nextNode = now->next;

	now->next = nextNode->next;
	free(now);

	return (1);
}
