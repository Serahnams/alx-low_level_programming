#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char d;
	int i;

	i = 0;

	while (i < 10)
	{
	d = 'a';
	while (d <= 'z')
	{
	_putchar(d);
	d++;
	}
	_putchar('\n');
	i++;
	}
}
