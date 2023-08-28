#include "main.h"

/**
 * _strpbrk - searches a string for any bytes
 * @s: target string
 * @accept: characters to be search for
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
