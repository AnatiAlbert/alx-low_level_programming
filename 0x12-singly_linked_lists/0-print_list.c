#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to the list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t st = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		st++;
	}

	return (st);
}
