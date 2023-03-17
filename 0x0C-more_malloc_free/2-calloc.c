#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array to be used
 * @size: the total allocated space
 * Return: if nmemb or size is 0 return null & NULL if its fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	else
	{
		array = malloc(sizeof(int) * size);

		for (i = 0; i < (int)size; i++)
		{
			array[i] = i * 2 + 1;

		}
		if (array == 0)
		{
			return (NULL);
		}
	}
	return (array);
}
