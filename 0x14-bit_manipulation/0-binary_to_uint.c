#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to string of 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
		{
			return (0);
		}
		decimal = 2 * decimal + (b[d] - '0');
	}
	return (decimal);
}
