#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int h, g;

	for (h = '0'; h < '9'; h++)
	{
	for (g = h + 1; g <= '9'; g++)
	{
	if (g != h)
	{
	putchar(h);
	putchar(g);
	if (h == '8' && g == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
