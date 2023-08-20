#include <stdio.h>
/**
 * main - prints the sum of even value terms of fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 0;
	long n2 = 1;
	long n3 = 3;
	long result = n3;

	while (n3 + n2 < 4000000)
	{
		n3 = n3 + n2;
		if (n3 % 2 == 0)
		{
			result = result + n3;
			n2 = n3 - n2;
		}
		++n1;
	}
	printf("%ld\n", result);
	return (0);
}
