#include "main.h"
/**
 * puts2 - function should print character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
