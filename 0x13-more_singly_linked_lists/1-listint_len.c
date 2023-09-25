#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - prints number of elements
 * @h: pointer to nodes in list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
