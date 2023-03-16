#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees 2 dims grid
 * @grid: grid to be used
 * @height: dimension to be freed
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL || height != 0)
	{
		for (n = 0; n < height; n++)
		{
			free(grid[n]);
		}
	free(grid);
	return (0);
}
