#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of array to be printed
 *
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < (n - 1); r++)
	{
		printf("%d, ", a[r]);
	}
		if (r == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
