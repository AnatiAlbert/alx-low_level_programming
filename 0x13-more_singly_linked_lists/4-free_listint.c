#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: point to listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *fnod;

	while (head)
	{
		fnod = head->next;
		free(head);
		head = fnod;
	}
}
