#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: string to concatenate from
 * @n: number of bytes
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int r = 0, k = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (r < length1)
	{
		s[r] = s1[r];
		r++;
	}

	while (n < length2 && r < (length1 + n))
		s[r++] = s2[k++];

	while (n >= length2 && r < (length1 + length2))
		s[r++] = s2[k++];

	s[r] = '\0';

	return (s);
}
