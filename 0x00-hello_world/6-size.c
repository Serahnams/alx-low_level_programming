#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %u byte(s)\n", sizeof(a));
printf("size of an int: %u byte(s)\n", sizeof(b));
printf("size of a long int: %u byte(s)\n", sizeof(c));
printf("size of a long long int: %u byte(s)\n", sizeof(d));
printf("size of a float: %u byte(s)\n", sizeof(f));
return (0);
}
