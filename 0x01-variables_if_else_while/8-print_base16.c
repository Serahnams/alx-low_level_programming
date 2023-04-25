#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char low;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
