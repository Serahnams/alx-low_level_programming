#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints sum of positive numbers
 * @argc: arguement count
 * @argv: arguements
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int r;
	unsigned int q, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (r = 1; r < argc; r++)
		{
			c = argv[r];

		for (q = 0; q < strlen(c); q++)
		{
			if (c[q] < 48 || c[q] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(c);
		c++;
		}
		printf("%i\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
