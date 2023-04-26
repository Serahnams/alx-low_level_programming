#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int fib1, fib2, fn;

	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld", fib1, fib2);
	for (c = 0; c < 48; c++)
	{
		fn = fib1 + fib2;
		printf(", %ld", fn);
		fib1 = fib2;
		fib2 = fn;
	}
	printf("\n");
	return (0);
}
