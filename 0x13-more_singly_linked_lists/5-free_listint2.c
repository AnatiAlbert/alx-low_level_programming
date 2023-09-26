#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: point to listint_t list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nodn;

	if (head == NULL)
		return;

	while (*head)
	{
		nodn = (*head)->next;
		free(*head);
		*head = nodn;
	}

	*head = NULL;
}
