#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: target string
 * @accept: string to be counted
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int m;
	unsigned int j = 0;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (accept[m] == *s)
			{
				j++;
				break;
			}
			else if (accept[m + 1] == '\0')
			{
				return (j);
			}
		}
		s++;
	}
	return (j);
}
