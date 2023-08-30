#include "main.h"
int real_sqrt(int n, int w);

/**
 * _sqrt_recursion - returns natural square root
 * @n: value to be checked
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt(n, 0));
}

/**
 * real_sqrt - aids to get natural square root
 * @n: number to find square root
 * @w: number to iterate
 * Return: square root value
 */
int real_sqrt(int n, int w)
{
	if (n < w * w)
	{
		return (-1);
	}
	if (n == w * w)
	{
		return (w);
	}
	return (real_sqrt(n, w + 1));
}
