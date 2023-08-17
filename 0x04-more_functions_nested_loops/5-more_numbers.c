#include "main.h"
/**
 * more_numbers - prints numbers, 0 to 14, 10 times
 */
void more_numbers(void)
{
	int n1;
	int n2;

	for (n1 = 1; n1 <= 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				_putchar((n2 / 10) + '0');
			}
			_putchar(n2 % 10 + '0');
		}
		_putchar('\n');
	}
}
