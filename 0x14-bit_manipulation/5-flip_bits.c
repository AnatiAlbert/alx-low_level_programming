#include "main.h"

/**
 * flip_bits - returns bits to flip a number to another
 * @n: first number
 * @m: second number
 * Return:  return a number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bt, total = 0;
	unsigned long int prev;
	unsigned long int xclus = n ^ m;

	for (bt = 63; bt >= 0; bt--)
	{
		prev = xclus >> bt;
		if (prev & 1)
			total++;
	}
	return (total);
}
