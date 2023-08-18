#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int len1;
	int len2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (len1 = 1; len1 <= size; len1++)
	{
		for ((len2 = size - len1); len2 > 0; len2--)
		{
			_putchar(' ');
		}
		for (len2 = 1; len2 <= len1; len2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
