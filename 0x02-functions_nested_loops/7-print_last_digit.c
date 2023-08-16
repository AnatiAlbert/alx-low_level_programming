#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 *
 * @n: value to be used.
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
