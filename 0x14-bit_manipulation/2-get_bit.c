#include "main.h"

/**
 * get_bit - returns the value of bit at a given index
 * @n: integer to be evaluated
 * @index: index starting from 0
 * Return: value of bit or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bval;

	if (index > 63)
		return (-1);

	bval = (n >> index) & 1;

	return (bval);
}
