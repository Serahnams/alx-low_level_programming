#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int g, h;

		for (g = 0; g < n; g++)
		{
			for (h = 0; h < n; h++)
			{
				if (h == g)
					_putchar('\\');
				else if (h < g)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
