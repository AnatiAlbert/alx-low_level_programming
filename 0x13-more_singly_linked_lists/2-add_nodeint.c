#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to first node
 * @n: data to be entered
 * Return: new node at beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod_n = malloc(sizeof(listint_t));
	
	if (!nod_n)
		return (NULL);
	nod_n->n = n;
	nod_n->next = NULL;

	nod_n->next = *head;
	*head = nod_n;
	return (nod_n);
}
