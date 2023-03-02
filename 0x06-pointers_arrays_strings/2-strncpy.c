#include "main.h"

/**
 * _strncpy - function that copies a string src to dest string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: maximum size allocated
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		if (d < n)
		{
			dest[d] = src[d];
		}
		while (d < n)
		{
			dest[d++] = '\0';
		}
	}
	return (dest);
}

