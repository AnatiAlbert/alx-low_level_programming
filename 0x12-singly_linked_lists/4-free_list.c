#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *nod;

	while (head)
	{
		nod = head->next;
		free(head->str);
		free(head);
		head = nod;
	}
}
