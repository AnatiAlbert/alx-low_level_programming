#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints the number of elements
 * @h: pointer to the node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t stn = 0;

	while (h)
	{
		stn++;
		h = h->next;
	}

	return (stn++);
}
