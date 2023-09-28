#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: target number to evaluated
 * @index: index position of number
 * Return: 1 if worked or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & (~(1 << index)));
	return (1);
}
