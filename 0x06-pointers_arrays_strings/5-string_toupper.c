#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @str: string value to be changed
 * Return: returns a pointer
 */
char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - ('a' - 'A');
		}
	}
	return (str);
}
