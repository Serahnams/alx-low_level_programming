#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: int input
 * @av: array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int r, p, q = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (r = 0; r < ac; r++)
	{
		for (p = 0; av[r][p]; p++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
	for (p = 0; av[r][p]; p++)
	{
		str[q] = av[r][p];
		q++;
	}
	if (str[q] == '\0')
	{
		str[q++] = '\n';
	}
	}
	return (str);
}
