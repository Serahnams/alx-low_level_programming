#include "main.h"


/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int p, s, l;


	if (n >= 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			for (s = 0; s <= n; s++)
			{
				l = s * p;
				if (s == 0)
				{
					_putchar(l + '0');
				} else if (l < 10 && s != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(l + '0');
				} else if (l >= 10 && l < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				} else if (l >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
					_putchar((l % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
