#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: target string to be converted
 * Return: returns astring number
 */
char *leet(char *str)
{
	int m;
	int n;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[m] == c1[n])
			{
				str[m] = c2[n];
			}
		}
	}
	return (str);
}
