#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a ptr to a 2 dim array of ints
 * @width: the first array dimension
 * @height: the second array dimension
 * Return: if failure return NILL, if negative or zero return NILL
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **shape;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	shape = malloc(sizeof(int) * height);

	if (shape == NULL)
	{
		free(shape);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		if (shape == NULL)
		{
			free(shape);
			return (NULL);
		}

		shape[x] = malloc(sizeof(int) * width);

		for (y = 0; y < width; y++)
		{
			shape[x][y] = 0;
		}
	}
	return (shape);
	free(shape);
}

