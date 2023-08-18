#include <stdio.h>
/**
 * main - program prints prime factors of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	int prime;
	long largest = 0;

	for  (prime = 2; prime > 1; prime++)
	{
		while (number % prime == 0)
		{
			number = number / prime;

			if (largest < prime)
				largest = prime;
		}
	}
	printf("The largest is %ld\n", largest);
	return (0);
}
