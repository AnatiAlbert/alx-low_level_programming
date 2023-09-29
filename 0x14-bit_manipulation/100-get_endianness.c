#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int en = 1;
	char *a = (char *) &en;

	return (*a);
}
