#include <stdio.h>
#include "main.h"

/**
 * main - prins number of arguments passed
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}

