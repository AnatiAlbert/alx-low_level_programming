#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: number to flip
 * @m: number to flip to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, totalbit = 0;
	unsigned long int initial;
	unsigned long int external = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		initial = external >> i;
		if (initial & 1)
			totalbit++;
	}
	return (totalbit);
}
