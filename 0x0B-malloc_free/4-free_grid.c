#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: grid that is freed
 * @height: height of grid to be freed
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
