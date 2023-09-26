#include "lists.h"
/**
 * reverse_listint - reverse a listint_t linked list
 * @head: pointer to node
 * Return: pointer to first node in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod1 = NULL;
	listint_t *nod2 = NULL;

	while (*head)
	{
		nod2 = (*head)->next;
		(*head)->next = nod1;
		nod1 = *head;
		*head = nod2;
	}

	*head = nod1;

	return (*head);
}
