#include <stdio.h>
/**
 * print_buffer - prints a buffer
 *
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int r, t, x;

	if (size <= 0)
		printf("\n");
	else
	{
		for (r = 0; r < size; r += 10)
		{
			printf("%.8x:", r);
			for (t = r; t < r + 10; t++)
			{
				if (t % 2 == 0)
					printf(" ");
				if (t < size)
					printf("%.2x", *(b + t));
				else
					printf("  ");
			}
			printf(" ");
			for (x = r; x < r + 10; x++)
			{
				if (x >= size)
					break;
				if (*(b + x) < 32 || *(b + x) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + x));
			}
			printf("\n");
		}
	}
}
