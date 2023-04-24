#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Prints all letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
