#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, k, n = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = " ";
	}

	else
	{
		for (i = 0; i < *s1; i++)
		{
		}

		for (k = 0; k < *s2; k++)
		{
		}

		ptr =  malloc(sizeof(char) * (i + k + 1));

		if (ptr == NULL)
			return (NULL);

		while (*s1)
		{
			ptr[n] = *s1;
			n++;
			s1++;
		}

		while (*s2)
		{
			ptr[n] = *s2;
			n++;
			s2++;
		}
	}
	return (ptr);
}
