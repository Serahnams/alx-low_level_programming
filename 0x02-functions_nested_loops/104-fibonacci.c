#include <stdio.h>


/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int q;
	unsigned long int bf = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bf1;
	unsigned long int bf2;
	unsigned long int aft1;
	unsigned long int aft2;


	printf("%lu", bf);


	for (q = 1; q < 91; q++)
	{
		printf(", %lu", aft);
		aft += bf;
		bf = aft - bf;
	}


	bf1 = (bf / l);
	bf2 = (bf % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (q = 92; q < 99; ++q)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bf1;
		bf1 = aft1 - bf1;
		aft2 = aft2 + bf2;
		bf2 = aft2 - bf2;
	}
	printf("\n");
	return (0);
}
