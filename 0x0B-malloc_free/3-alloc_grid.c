#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - pointer to two dimensional array of ints
 * @width: width of grid
 * @height: height of the grid
 *
 * Return: pointer to 2 dimension array (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int r, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (r = 0; r < height; r++)
	{
		grid[r] = (int *) malloc(sizeof(int) * width);
		if (grid[r] == NULL)
		{
			free(grid);
			for (k = 0; k <= r; k++)
				free(grid[k]);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (k = 0; k < width; r++)
		{
			grid[r][k] = 0;
		}
	}
	return (grid);
}
