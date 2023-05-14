#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int r, q;

	if (argc == 3)
	{
		r = atoi(argv[1]);
		q = atoi(argv[2]);

		printf("%i\n", r * q);

		return (0);
	}
	printf("Error\n");
	return (1);
}
