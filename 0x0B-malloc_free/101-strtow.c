#include "main.h"
#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, n, l;

	flag = 0;
	l = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			l++;
		}
	}

	return (l);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int r, j = 0, length = 0, words, n = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (r = 0; r <= length; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (n)
			{
				end = r;
				tmp = (char *) malloc(sizeof(char) * (n + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - n;
				j++;
				n = 0;
			}
		}
		else if (j++ == 0)
			start = r;
	}

	matrix[j] = NULL;

	return (matrix);
}
