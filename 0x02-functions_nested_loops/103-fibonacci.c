#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, f, fb;

	n1 = 1;
	n2 = 2;
	f = fb = 0;
	while (f <= 4000000)
	{
		f = n1 + n2;
		n1 = n2;
		n2 = f;
		if ((n1 % 2) == 0)
		{
			fb += n1;
		}
	}
	printf("%ld\n", fb);
	return (0);
}

