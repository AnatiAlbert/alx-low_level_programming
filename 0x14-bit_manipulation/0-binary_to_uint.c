#include "main.h"

/**
 * binary_to_unit - converts binary numbery to unsigned integer
 * @b: points to string of 0s and 1s characters
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int int_anati = 0;
	int i;
	
	if (b == NULL)
		return (0);
	else if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		int_anati = int_anati << 1;

		if (b[i] == '1')
			int_anati = int_anati + 1;
	}

	return (int_anati);
}
