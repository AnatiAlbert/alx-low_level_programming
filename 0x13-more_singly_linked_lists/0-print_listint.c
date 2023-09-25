#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer to list of node
 * Return: elements of node
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
