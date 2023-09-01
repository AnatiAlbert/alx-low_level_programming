#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy into
 * @src: source character to be copied
 * @n: number of bytes
 * Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
