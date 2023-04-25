#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 * Return: 0 (success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
