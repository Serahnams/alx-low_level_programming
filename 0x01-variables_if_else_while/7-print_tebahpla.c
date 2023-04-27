#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lw;

	for (lw = 'z'; lw >= 'a'; lw--)
		putchar(lw);
	putchar('\n');
	return (0);
}
