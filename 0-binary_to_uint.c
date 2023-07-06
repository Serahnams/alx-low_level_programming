#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - binary number converted to unsigned int
* @b: string of chars
*
* Return: the number converted
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int con = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
con = (con << 1) + (*b - '0');
b++;
}
return (con);
}
