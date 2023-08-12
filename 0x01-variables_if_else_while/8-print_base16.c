#include <stdio.h>
/**
 * main - program prints numers in base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + num - 10);
		}
	}
	putchar('\n');
	return (0);
}
