#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: start of point of minimum integer in the range
 * @max: end poit of integer range
 * Return: if success return pointer, if min is less than max
 * return NULL and if malloc fails return NILL
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		size = max - min + 1;
		array = malloc(sizeof(int) * size);

		if (array == 0)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			array[i] = min++;
		}
	}
	return (array);
}
