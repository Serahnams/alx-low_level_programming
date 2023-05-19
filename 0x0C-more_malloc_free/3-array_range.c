#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int r, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (r = 0; min <= max; r++)
		p[r] = min++;

	return (p);
}
