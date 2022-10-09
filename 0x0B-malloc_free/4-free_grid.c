#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid-a function that frees a 2 dimensional grid
 * previously created by alloc_grid function.
 *
 * @grid:array to be freed
 * @height:height og grid
 *
 * Return:void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
		for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid);
}
