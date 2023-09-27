#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t bret = 0;
	int dfs;
	listint_t *nod;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dfs = *h - (*h)->next;
		if (dfs > 0)
		{
			nod = (*h)->next;
			free(*h);
			*h = nod;
			bret++;
		}
		else
		{
			free(*h);
			*h = NULL;
			bret++;
			break;
		}
	}

	*h = NULL;

	return (bret);
}

