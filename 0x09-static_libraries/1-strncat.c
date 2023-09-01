#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenates two strings.
 * @dest: final string to be created
 * @src: string to be added
 * @n: numbers of bytes from src
 * Return: a pointer resulting to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}
