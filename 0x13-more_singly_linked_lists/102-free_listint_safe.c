#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t countNodes = 0;
	listint_t *now = *h;
	listint_t *next = NULL;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (now != NULL)
	{
		next = now->next;
		free(now);
		countNodes++;

		if (next >= now)
		{
			break;
		}

		now = next;
	}

	*h = NULL;
	return (countNodes);
}
