#include "main.h"
/**
 * print_most_numbers - prints all digits ignoring 2 and 4
 */
void print_most_numbers(void)
{
	int n1;

	for (n1 = 0; n1 <= 9; n1++)
	{
		if (n1 != 2 && n1 != 4)
		{
			_putchar(n1 + '0');
		}
	}
	_putchar('\n');
}
