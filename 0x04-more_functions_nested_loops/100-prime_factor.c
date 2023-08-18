#include <stdio.h>
/**
 * main - program prints prime factors of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int prime;
	unsigned long int largest = 0;

	for  (prime = 2; prime > 1; prime++)
	{
		while (number % prime == 0)
		{
			number = number / prime;

			if (largest < prime)
				largest = prime;
		}
	}
	printf("%lu\n", largest);
	return (0);
}
