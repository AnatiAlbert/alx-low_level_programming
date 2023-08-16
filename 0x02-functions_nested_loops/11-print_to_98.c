#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers up to 98.
 *
 * @n: number to start printing from.
 */
void print_to_98(int n)
{
	int num;
	int num1;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else if (num == 98)
			{
				printf("%d\n", num);
			}
		}
	}
	else if (n >= 98)
	{
		for (num1 = n; num1 >= 98; num1--)
		{
			if (num1 != 98)
			{
				printf("%d, ", num1);
			}
			else if (num1 == 98)
			{
				printf("%d\n", num1);
			}
		}
	}
}
