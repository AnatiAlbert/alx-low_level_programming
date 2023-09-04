#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: character of array
 * Return: returns a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			ptr[m] = c;
		}
	}
	return (ptr);
}
