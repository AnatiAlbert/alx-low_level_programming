#include "main.h"
/**
 * print_line - draws a straight line
 * @n: value to be used
 */
void print_line(int n)
{
	if (n >= 0)
	{
		int n1;

		for (n1 = 0; n1 < n; n1++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
