#include "main.h"
/**
 * times_table - prints out 9 times table starting with 0.
 */
void times_table(void)
{
	int num;
	int num1;
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			num2 = num1 * num;
			if (num1 == 0)
			{
				_putchar(num2 + '0');
			}

			if (num2 < 10 && num1 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num2 + '0');
			}
			else if (num2 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num2 / 10) + '0');
				_putchar((num2 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
