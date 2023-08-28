#include "main.h"

/**
 * _memset - fills memory area with constant byte
 * @s: pointer to constant byte
 * @b: constant byte to fill memory
 * @n: number of bytes
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
