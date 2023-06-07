#include "lists.h"
#include <stdio.h>

size_t looped_listint_count(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer
 *
 * Return: If the list is not looped - 0.
 * Otherwise - unique nodes in the list.
 */
size_t looped_listint_count(const listint_t *head)
{
	const listint_t *snail, *quick;
	size_t countNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	quick = (head->next)->next;

	while (quick)
	{
		if (snail == quick)
		{
			snail = head;
			while (snail != quick)
			{
				countNodes++;
				snail = snail->next;
				quick = quick->next;
			}

			snail = snail->next;
			while (snail != quick)
			{
				countNodes++;
				snail = snail->next;
			}

			return (countNodes);
		}

		snail = snail->next;
		quick = (quick->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t countNodes, index = 0;

	countNodes = looped_listint_count(head);

	if (countNodes == 0)
	{
		for (; head != NULL; countNodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < countNodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (countNodes);
}
