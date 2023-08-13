#include <stdio.h>
/**
 * main - Program prints all possible combination of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');

			if (num < 8 || num1 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
