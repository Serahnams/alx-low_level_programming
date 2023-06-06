#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		countNode++;
		h = h->next;
	}
	return (countNode);
}

