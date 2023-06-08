#include "main.h"

/**
 * flip_bits - number of bits to flip to change from
 * number to another
 * @n: number to flip from
 * @m: number to flip to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int solution = n ^ m;
	unsigned int cal = 0;

	while (solution != 0)
	{
		if (solution & 1)
			cal++;
		solution >>= 1;
	}

	return (cal);
}
