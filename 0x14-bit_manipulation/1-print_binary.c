#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number to be computed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bin, total = 0;
	unsigned long int fig;

	for (bin = 63; bin >= 0; bin--)
	{
		fig = n >> bin;

		if (fig & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
		{
			_putchar('0');
		}
	}
	if (!total)
		_putchar('0');
}
