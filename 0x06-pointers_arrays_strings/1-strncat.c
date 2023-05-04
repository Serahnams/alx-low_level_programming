#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int q;
	int r;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}

	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[q] = src[r];
		q++;
		r++;
	}
	dest[q] = '\0';

	return (dest);
}
