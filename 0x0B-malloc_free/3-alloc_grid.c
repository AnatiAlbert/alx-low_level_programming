#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns two dimensional grid array
 * @width: value to determine width
 * @height: value to determine height
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **agrid;
	int g, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	agrid = malloc(sizeof(int *) * height);

	if (agrid == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		agrid[g] = malloc(sizeof(int) * width);

		if (agrid[g] == NULL)
		{
			for (; g >= 0; g--)
				free(agrid[g]);

			free(agrid);
			return (NULL);
		}
	}
	for (g = 0; g < height; g++)
	{
		for (h = 0; h < width; h++)
			agrid[g][h] = 0;
	}
	return (agrid);
}
