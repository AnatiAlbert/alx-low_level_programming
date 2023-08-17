#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: determines number of line characters
 */
void print_diagonal(int n)
{
	int n1;
	int n2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (n1 = 0; n1 < n; n1++)
	{
		for (n2 = 0; n2 < n1; n2++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
