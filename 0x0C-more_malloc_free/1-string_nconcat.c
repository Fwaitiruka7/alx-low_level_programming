#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size to be allocated
 * Return: if successful return pointer, if it fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *ptr;
	int i, j, str = 0;
	int sl = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < *s1; i++)
		{
		}
		for (j = 0; j < *s2; j++)
		{
		}
		if ((int)n >= sl)
		{
			n = j;
			ptr = malloc(sizeof(char) * n);
		}
		else
		{
			n = i + j + 1;
			ptr = malloc(sizeof(char) * n);
		}
		while (*s1 < '\0')
		{
			ptr[str] = *s1, str++, s1++;
		}
		while (*s2 < '\0')
		{
			ptr[str] = *s2, str++, s2++;
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return ((void *)ptr);
}
