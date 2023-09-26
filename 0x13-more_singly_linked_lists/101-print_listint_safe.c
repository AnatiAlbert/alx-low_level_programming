#include "lists.h"
#include <stdio.h>

size_t nod_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * nod_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 * Return: If the list is not looped - 0.
 */
size_t nod_listint_len(const listint_t *head)
{
	const listint_t *tnod, *hnod;
	size_t nods = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tnod = head->next;
	hnod = (head->next)->next;

	while (hnod)
	{
		if (tnod == hnod)
		{
			tnod = head;
			while (tnod != hnod)
			{
				nods++;
				tnod = tnod->next;
				hnod = hnod->next;
			}

			tnod = tnod->next;
			while (tnod != hnod)
			{
				nods++;
				tnod = tnod->next;
			}

			return (nods);
		}

		tnod = tnod->next;
		hnod = (hnod->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nods, idx = 0;

	nods = nod_listint_len(head);

	if (nods == 0)
	{
		for (; head != NULL; nods++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nods; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nods);
}

