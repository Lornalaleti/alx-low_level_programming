#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
* @width: width of the matix
* @height: height of the matix
* Return: pointer with 2 dimensions of the matix
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);

			free(grid);
			return (0);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
