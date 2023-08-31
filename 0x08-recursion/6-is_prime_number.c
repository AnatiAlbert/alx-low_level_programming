#include "main.h"
int real_prime(int m, int u);

/**
 * is_prime_number - determines if integer is prime or not
 * @n: value to be evaluated
 * Return: 1 for prime, 0 for not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}
/**
 * real_prime - determine prime through recursion
 * @m: value to be evaluated
 * @u: number for iteration
 * Return: returns an integer
 */
int real_prime(int m, int u)
{
	if (u == 1)
	{
		return (1);
	}
	if (m % u == 0 && u > 0)
	{
		return (0);
	}
	return (real_prime(m, u - 1));
}
