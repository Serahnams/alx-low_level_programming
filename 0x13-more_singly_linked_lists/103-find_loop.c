#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail = head;
	listint_t *quick = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	listint_t *slow = head->next;
	listint_t *fast = head->next->next;

	while (quick != NULL && quick->next != NULL)
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
