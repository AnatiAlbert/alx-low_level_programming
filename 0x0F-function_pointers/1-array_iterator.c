#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function as a parameter
 * @array: array to be computed
 * @size: is the size of array
 * @action: is the pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
			action(array[i]);
	}
}
