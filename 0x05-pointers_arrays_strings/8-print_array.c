#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers
 * @a: array to be created
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
