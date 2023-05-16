#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees two dimensional grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}

	free(grid);
}
