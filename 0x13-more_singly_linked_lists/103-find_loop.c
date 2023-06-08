#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *quick;

	if (head == NULL || head->next == NULL)
		return (NULL);

	snail = head->next;
	quick = head->next->next;

	while (quick && quick->next)
	{
		if (snail == quick)
		{
			snail = head;
			while (snail != quick)
			{
				snail = snail->next;
				quick = quick->next;
			}

			return (snail);
		}

		snail = snail->next;
		quick = quick->next->next;
	}

	return (NULL);
}
