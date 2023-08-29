#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal of a square matrix of integers
 * @a: target array to be used.
 * @size: number of rows
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int m;
	int result1 = 0;
	int result2 = 0;

	for (m = 0; m < size; m++)
	{
		result1 = result1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		result2 += a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", result1, result2);
}
