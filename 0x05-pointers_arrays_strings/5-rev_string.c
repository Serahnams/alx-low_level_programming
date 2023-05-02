#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int p;

	while (s[c] != '\0')
	c++;
	for (p = 0; p < c; p++)
	{
		c--;
		rev = s[p];
		s[p] = s[c];
		s[c] = rev;
	}
}

