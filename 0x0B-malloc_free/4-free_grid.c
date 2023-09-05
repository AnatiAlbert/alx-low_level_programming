#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid
 * @grid: grid of array
 * @height: number for height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int m = 0;

	while (m < height)
	{
		free(grid[m]);
		m++;
	}
	free(grid);
}
