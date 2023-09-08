#include "main.h"
#include <stdlib.h>
/**
 * array_range - function creates an array of integers
 * @min: minimum element value
 * @max: maximum element value
 * Return: returns a pointer
 */
int *array_range(int min, int max)
{
	int *pr;
	int  e, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pr = malloc(size * sizeof(int));

	if (pr == NULL)
		return (NULL);

	for (e = 0; min <= max; e++)
		pr[e] = min++;

	return (pr);
}
