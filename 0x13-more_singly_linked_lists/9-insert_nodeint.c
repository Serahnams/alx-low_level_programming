#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node is added
 * @n: data
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int countNode = 0;
	listint_t *now = *head;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (now != NULL && countNode < idx - 1)
	{
		now = now->next;
		countNode++;
	}
	if (now == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = now->next;
	now->next = newNode;
	return (newNode);
}
