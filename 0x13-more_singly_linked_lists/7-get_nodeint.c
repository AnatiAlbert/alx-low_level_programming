#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to node
 * @index: index of node
 * Return: a node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *nodn = head;

	while (nodn && x < index)
	{
		nodn = nodn->next;
		x++;
	}

	return (nodn ? nodn : NULL);
}
