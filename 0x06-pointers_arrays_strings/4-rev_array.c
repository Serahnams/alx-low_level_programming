#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int t, c;

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		t = a[c];
		a[c++] = a[n];
		a[n--] = t;
	}
}
