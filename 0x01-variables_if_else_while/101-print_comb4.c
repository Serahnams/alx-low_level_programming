#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int h, g, r;

	for (h = '0'; h < '9'; h++)
	{

	for (g = h + 1; g <= '9'; g++)
	{

	for (r = g + 1; r <= '9'; r++)
	{
	if ((g != h) != r)
	{
	putchar(h);
	putchar(g);
	Putchar(r);
	if (h == '7' && g == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
