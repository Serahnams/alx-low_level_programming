#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int q, r;

		for (q = 0; q < size; q++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
