#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to be multiplied.
 */
void print_times_table(int n)
{
	int num;
	int num1;
	int num2;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (num1 = 1; num1 <= n; num1++)
			{
				_putchar(',');
				_putchar(' ');
				num2 = num * num1;

				if (num2 <= 99)
				{
					_putchar(' ');
				}
				if (num2 <= 9)
				{
					_putchar(' ');
				}
				if (num2 >= 100)
				{
					_putchar((num2 / 100) + '0');
					_putchar((num2 / 10) % 10 + '0');
				}
				else if (num2 <= 99 && num2 >= 10)
				{
					_putchar((num2 / 10) + '0');
				}
				_putchar((num2 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
