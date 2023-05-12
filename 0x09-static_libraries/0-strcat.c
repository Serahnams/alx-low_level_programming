#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int q;
	int r;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[q] = src[r];
		q++;
		r++;
	}

	dest[q] = '\0';
	return (dest);
}
