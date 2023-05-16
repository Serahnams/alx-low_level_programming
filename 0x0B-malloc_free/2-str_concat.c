#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2(success) NULL(Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int r, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = c = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[c] != '\0')
		c++;
	con = malloc(sizeof(char) * (r + c + 1));

	if (con == NULL)
		return (NULL);
	r = c = 0;
	while (s1[r] != '\0')
	{
		con[r] = s1[r];
		r++;
	}

	while (s2[c] != '\0')
	{
		con[r] = s2[c];
		r++, c++;
	}
	con[r] = '\0';
	return (con);
}
