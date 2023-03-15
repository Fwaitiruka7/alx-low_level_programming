#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be used
 * Return: NULL if str is NULL & pointer if successful & null if memory is
 * insufficient
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, n;

	if (str == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i <= *str; i++)
		{
		}
		i += 1;
		array = malloc(sizeof(char) * i);

		for (n = 0; n <= i; n++)
		{
			array[n] = str[n];
		}

		if (array == 0 || i == 0)
			return (NULL);
		return (array);
	}
	free(array);
	free(str);
}
