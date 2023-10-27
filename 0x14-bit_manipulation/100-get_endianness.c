#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little endian and 0 for big endian
 */

int get_endianness(void)
{
	int n = 1;
	char *p;

	p = (char *)&n;
	return (*p);
}
