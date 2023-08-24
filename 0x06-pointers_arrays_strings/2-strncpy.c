#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: where copied characters will be stored
 * @src: source wherestring will be copied
 * @n: maximum number of character to be copied
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i1 = 0;
	int slen = 0;

	while (src[i1++])
	{
		slen++;
	}
	for (i1 = 0; src[i1] && i1 < n; i1++)
	{
		dest[i1] = src[i1];
	}
	for (i1 = slen; i1 < n; i1++)
	{
		dest[i1] = '\0';
	}
	return (dest);
}
