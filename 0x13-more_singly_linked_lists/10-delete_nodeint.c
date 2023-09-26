#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to node
 * @index: index of node to be deleted
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodh = *head;
	listint_t *nood = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nodh);
		return (1);
	}

	while (x < index - 1)
	{
		if (!nodh || !(nodh->next))
			return (-1);
		nodh = nodh->next;
		x++;
	}

	nood = nodh->next;
	nodh->next = nood->next;
	free(nood);
	return (1);
}
