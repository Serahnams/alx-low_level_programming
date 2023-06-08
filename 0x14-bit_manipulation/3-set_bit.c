#include "main.h"

/**
 * set_bit - sets value of a bit at a given index to 1
 * @n: the number
 * @index: index of bit to set
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (unsigned long int)(1 << index);

	return (1);
}
