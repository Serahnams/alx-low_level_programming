#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	 size_t countNode = 0;
	 listint_t *now = *h;
	 listint_t *next;

	while (now != NULL)
	{
		countNode++;
		next = now->next;
		free(now);
		now = next;
	}

	*h = NULL;
	return (countNode);
}
