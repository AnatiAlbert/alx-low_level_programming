#include <stdio.h>
/**
 * main - A program prints single numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
