#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns 2 dimensioanal array of integers
 * @width: first integer
 * @height: second integer
 * Return: 2 dimensional array
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
