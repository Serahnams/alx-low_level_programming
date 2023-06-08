#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *endian = (char *) &r;

	if (*endian == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
