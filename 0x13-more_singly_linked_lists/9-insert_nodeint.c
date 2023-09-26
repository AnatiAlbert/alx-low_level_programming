#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to node
 * @idx: postion of node
 * @n: value of node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *nood;
	listint_t *nodh = *head;

	nood = malloc(sizeof(listint_t));

	if (!nood || !head)
		return (NULL);

	nood->n = n;
	nood->next = NULL;

	if (idx == 0)
	{
		nood->next = *head;
		*head = nood;
		return (nood);
	}

	for (d = 0; nodh && d < idx; d++)
	{
		if (d == idx - 1)
		{
			nood->next = nodh->next;
			nodh->next = nood;
			return (nood);
		}
		else
			nodh = nodh->next;
	}

	return (NULL);
}
