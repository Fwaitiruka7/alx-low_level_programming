#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: the string to append to
 * @src: the string to append from
 * @n: total number of characters to append to
 * Return pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int first, last;

	/*destination string*/
	for (first = 0; dest[first] != '\0'; first++)
	{
	}

	/*source string*/
	for (last = 0, last < n; last++)
	{
		dest[first + last] = src[last];
		if (src[last] == '\0')
		{
			last = n;
		}
	}
	return (dest);
}


