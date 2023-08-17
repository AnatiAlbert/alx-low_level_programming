#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9.
 */
void print_numbers(void)
{
	int n1;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar(n1 + '0');
	}
	_putchar('\n');
}
