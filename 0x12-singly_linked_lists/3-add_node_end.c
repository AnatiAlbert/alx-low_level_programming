#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer to list_t
 * @str: string to be used
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd, *end_nd = *head;
	unsigned int wid = 0;

	while (str[wid])
		wid++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->len = wid;
	new_nd->next = NULL;

	if (*head == NULL)
	{
		*head = new_nd;
		return (new_nd);
	}

	while (end_nd->next)
		end_nd = end_nd->next;
	end_nd->next = new_nd;

	return (new_nd);
}
