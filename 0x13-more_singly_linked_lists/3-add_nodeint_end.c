#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end
 * @head: pointer to node
 * @n: data element of node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nod = *head;
	listint_t *nod_n = malloc(sizeof(listint_t));

	if (!nod_n)
		return (NULL);
	nod_n->n = n;
	nod_n->next = NULL;

	if (*head == NULL)
	{
		*head = nod_n;
		return (nod_n);
	}

	while (nod->next)
		nod = nod->next;

	nod->next = nod_n;
	return (nod_n);
}
