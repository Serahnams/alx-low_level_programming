#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int q = 0;

	for (q = 0; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
			return (s + q);
	}
	return (0);
}
