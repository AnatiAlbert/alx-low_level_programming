#include "main.h"

/**
 * _pow_recursion - returns the exponent of a value
 * @x: base value
 * @y: power value
 * Return: returns an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
