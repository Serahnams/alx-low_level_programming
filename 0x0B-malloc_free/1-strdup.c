#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a copy of a string as a parameter
 * to a newly allocated spacevin memory
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;
	int q, r = 0;

	if (str == NULL)
		return (NULL);
	q = 0;
	while (str[q] != '\0')
		q++;

	dup = malloc(sizeof(char) * (q + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}
