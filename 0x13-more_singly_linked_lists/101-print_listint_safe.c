#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - prints a listint_t linked list
 * @head: A pointer
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *snail = head;
	const listint_t *quick = head;
	size_t countNode = 0;

	if (head == NULL)
		return (0);

	while (quick != NULL && quick->next != NULL)
	{
		printf("[%p] %i\n", (void *)snail, snail->n);
		countNode++;

		snail = snail->next;
		quick = quick->next->next;

		if (snail == quick)
		{
			printf("[%p] %i\n", (void *)snail, snail->n);
			countNode++;
			exit(98);
		}
	}

	printf("[%p] %i\n", (void *)snail, snail->n);
	countNode++;

	return (countNode);
}
