#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: returns a pointer
 */
char *rot13(char *str)
{
	int m;
	int n;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwyz";
	char letrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (str[m] == letter[n])
			{
				str[m] = letrot[n];
				break;
			}
		}
	}
	return (str);
}
