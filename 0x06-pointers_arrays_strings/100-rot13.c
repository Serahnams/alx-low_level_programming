#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int q, r;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (r = 0; x[r] != '\0'; r++)
		{
			if (s[q] == x[r])
			{
				s[q] = y[r];
				break;
			}
		}
	}

	return (s);
}
