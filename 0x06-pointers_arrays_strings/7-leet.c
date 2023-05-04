#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int length, count;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (length = 0; n[length] != '\0'; length++)
	{
		for (count = 0; count < 10; count++)
		{
			if (n[length] == s1[count])
			{
				n[length] = s2[count];
			}
		}
	}
	return (n);
}
