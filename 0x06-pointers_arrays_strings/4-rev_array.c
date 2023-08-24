#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: array to be targeted
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int back = 0;
	int front = n - 1;

	while (back < front)
	{
		int phrase = a[back];

		a[back] = a[front];
		a[front] = phrase;
		back++;
		front--;
	}
}
