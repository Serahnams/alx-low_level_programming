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
	int **dim;
	int r, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		dim[r] = malloc(sizeof(int) * width);

		if (dim[r] == NULL)
		{
			for (k = 0; k <= r; k++)
				free(dim[k]);

			free(dim);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (k = 0; k < width; k++)
		{
			dim[r][k] = 0;
		}
	}
	return (dim);
}
