#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int r, sum1 = 0, sum2 = 0;

	for (r = 0; r < size; r++)
	{
		sum1 += a[r];
		a += size;
	}

	a -= size;

	for (r = 0; r < size; r++)
	{
		sum2 += a[r];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
