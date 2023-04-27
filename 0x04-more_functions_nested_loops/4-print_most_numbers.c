#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
		if (!(p == '2' || p == '4'))
			_putchar(p);
	}
	_putchar('\n');
}
