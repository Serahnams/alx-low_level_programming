#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int m, q;

	for (m = 0; m <= 98; m++)
	{

	for (q = m + 1; q <= 99; q++)
	{
	putchar((m / 10) + '0');
	putchar((m % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (m == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
