#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int q;

	if (n < 0)
	{
		q = -n;
		_putchar('-');
	} else
	{
		q = n;
	}

	if (q / 10)
	{
		print_number(q / 10);
	}

	_putchar((q % 10) + '0');
}

