#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to listint_t list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *nodn;
	int fig;

	if (!head || !*head)
		return (0);

	fig = (*head)->n;
	nodn = (*head)->next;

	free(*head);
	*head = nodn;

	return (fig);
}
