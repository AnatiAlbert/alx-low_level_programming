#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number to be checked
 * @index: position of number
 * Return: value of bit at index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int split, verify;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	split = 1 << index;
	verify = n & split;
	if (verify == split)
		return (1);
	return (0);
}
