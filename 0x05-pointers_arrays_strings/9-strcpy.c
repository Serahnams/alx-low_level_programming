#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int q = -1;

	do {
		q++;
		dest[q] = src[q];
	} while (src[q] != '\0');

	return (dest);
}
