#include "main.h"

/**
* get_bit - returns value of a bit at a given index
* @n: number
* @index: index of the bit to get
*
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}
