#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer to node of list
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *nodn = head;

	while (nodn)
	{
		total = total + nodn->n;
		nodn = nodn->next;
	}

	return (total);
}
