#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: targeted number to be used
 * @index: position of number
 * Return: 1 if worked, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int outcome;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	outcome = 1 << index;
	*n = *n | outcome;
	return (1);
}
