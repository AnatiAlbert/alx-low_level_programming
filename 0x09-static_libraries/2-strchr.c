#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
	int m1;

	for (m1 = 0; s[m1] >= '\0'; m1++)
	{
		if (s[m1] == c)
		{
			return (s + m1);
		}
	}
	return (NULL);
}
