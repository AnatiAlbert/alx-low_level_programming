#include "main.h"

/**
 * _strlen - computes and returns the length of a string
 * @s: character to be computed.
 * Return: returns length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
