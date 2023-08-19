#include <stdio.h>
/**
 * main - print  first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 0;
	long n2 = 1;
	long n3 = 2;

	while (n1 < 50)
	{
		if (n1 == 0)
		{
			printf("%ld", n2);
		}
		else if (n1 == 1)
		{
			printf(", %ld", n3);
		}
		else
		{
			n3 = n3 + n2;
			n2 = n3 - n2;
			printf(", %ld", n3);
		}
		n1++;
	}
	printf("\n");
	return (0);
}
