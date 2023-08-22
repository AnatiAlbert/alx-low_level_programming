#include "main.h"

/**
 * _strcpy - copies string to src
 * @dest: copies null byte
 * @src: target string to be copied
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
