#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: indicates size of square
 */
void print_square(int size)
{
	int n1;
	int n2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (n1 = 0; n1 < size; n1++)
	{
		for (n2 = 0; n2 < size; n2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
