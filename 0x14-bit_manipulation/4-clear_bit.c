#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0 at given index
 * @n: target number to be used
 * @index: position of number
 * Return: 1 for success or -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
