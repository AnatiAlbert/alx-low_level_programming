#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int n1;
	int n2 = 0;

	while (n1 < 1024)
	{
		if ((n1 % 3 == 0) || (n1 % 5 == 0))
		{
			n2 = n2 + n1;
		}
		n1++;
	}
	printf("%d\n", n2);
	return (0);
}
