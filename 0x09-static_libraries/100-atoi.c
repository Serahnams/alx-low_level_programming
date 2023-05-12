#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int r, q, p, len, i, digit;

	r = 0;
	q = 0;
	p = 0;
	len = 0;
	i = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (r < len && i == 0)
	{
		if (s[r] == '-')
			++q;

		if (s[r] >= '0' && s[r] <= '9')
		{
			digit = s[r] - '0';
			if (q % 2)
				digit = -digit;
			p = p * 10 + digit;
			i = 1;
			if (s[r + 1] < '0' || s[r + 1] > '9')
				break;
			i = 0;
		}
		r++;
	}

	if (i == 0)
		return (0);

	return (p);
}
