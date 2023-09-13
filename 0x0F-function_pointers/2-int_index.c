#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: target array to be evaluated
 * @size: number of elements in array
 * @cmp: pointer to the function
 * Return: returns an index of element in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (a < size)
	{
		if (cmp(array[a]))
			return (a);
		a++;
	}

	return (-1);

}
