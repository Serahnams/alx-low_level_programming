#include <stdio.h>
	#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int r, h;


	if (n <= 98)
	{
		for (r = n; r <= 98; r++)
		{
			if (r != 98)
				printf("%d, ", r);
			else if (r == 98)
				printf("%d\n", r);
		}
	} else if (n >= 98)
	{
		for (h = n; h >= 98; h--)
		{
			if (h != 98)
				printf("%d, ", h);
			else if (h == 98)
				printf("%d\n", h);
		}
	}
}
