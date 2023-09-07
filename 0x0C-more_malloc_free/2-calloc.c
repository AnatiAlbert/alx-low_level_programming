#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pr = malloc(size * nmemb);

	if (pr == NULL)
		return (NULL);

	_memset(pr, 0, nmemb * size);

	return (pr);
}
