#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to
 * make change for an amount of money
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, q, change;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (q = 0; q < 5 && num >= 0; q++)
	{
		while (num >= cents[q])
		{
			change++;
			num -= cents[q];
		}
	}

	printf("%d\n", change);
	return (0);
}
