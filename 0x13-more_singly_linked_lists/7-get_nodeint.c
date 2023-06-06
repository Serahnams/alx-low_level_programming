#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node to starting at 0
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now = head;
	unsigned int countNode = 0;

	while (now != NULL)
	{
		if (countNode == index)
		{
			return (now);
		}
		now = now->next;
		countNode++;
	}

	return (NULL);
}
