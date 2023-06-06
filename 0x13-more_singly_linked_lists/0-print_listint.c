#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		int num = h->n;

		if (num < 0)
		{
			putchar('-');
			num = -num;
		}

		if (num == 0)
		{
			putchar('0');
		}

		else
		{
			int divisor = 1;

			while (divisor <= num)
			{
				divisor *= 10;
			}
			divisor /= 10;

			while (divisor > 0)
			{
				putchar('0' + (num / divisor));
				num %= divisor;
				divisor /= 10;
			}
		}
		putchar('\n');
		h = h->next;
		countNode++;
	}
	return (countNode);
}
