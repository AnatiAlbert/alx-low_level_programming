#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer of linked list to search for
 * Return: address of node where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nods = head;
	listint_t *nodf = head;

	if (!head)
		return (NULL);

	while (nods && nodf && nodf->next)
	{
		nodf = nodf->next->next;
		nods = nods->next;
		if (nodf == nods)
		{
			nods = head;
			while (nods != nodf)
			{
				nods = nods->next;
				nodf = nodf->next;
			}
			return (nodf);
		}
	}

	return (NULL);
}


