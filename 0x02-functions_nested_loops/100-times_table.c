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
			for (num1 = 0; num1 <= n; num1++)
			{
				num2 = num1 * num;

				if (num1 == 0)
				{
					_putchar(num2 + '0');
				}
				else if (num2 < 10 && num1 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num2 + '0');
				}
				else if (num2 >= 100)
				{

					_putchar(',');
					_putchar(' ');
					_putchar((num2 / 100) + '0');
					_putchar(((num2 / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
