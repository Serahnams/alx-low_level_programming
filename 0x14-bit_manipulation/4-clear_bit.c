#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: the number
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= ((1UL << index) & *n);

	return (1);
}
