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
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	else
	{
		array = malloc(nmemb * size);

		if (array == 0)
		{
			return (0);
		}

		else
		{
			memset(array, 0, nmemb * size);
		}
	}
	return (array);
}
