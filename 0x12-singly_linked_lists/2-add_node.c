#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node
 * @head: pointer to list_t
 * @str: string to be included
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	unsigned int wid = 0;

	while (str[wid])
		wid++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);
	new_nd->str = strdup(str);
	new_nd->len = wid;
	new_nd->next = (*head);
	(*head) = new_nd;

	return (*head);
}
