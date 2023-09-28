#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: number to evaluated
 * @index: given index of integer
 * Return: 1 for worked, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);

	return (1);
}
