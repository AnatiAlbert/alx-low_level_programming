#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: is the size of old pointer
 * @new_size: is the new memory block
 * Return: returns a new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *o_p;
	unsigned int e;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	o_p = ptr;

	if (new_size < old_size)
	{
		for (e = 0; e < old_size; e++)
			p1[e] = o_p[e];
	}
	free(ptr);

	return (p1);
}
