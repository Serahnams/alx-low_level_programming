#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number for the last digit with each execution
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = n % 10

	if (lastdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
	{
		printf("Last digit of %d is %d and is zero 0\n", n, lastdgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
