#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: character string to be scanned
 * @c: character to be searched for
 * Return: pointer to the first occurrence of the character c in the string s
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	if (!*s)
	{
		if (*s == c)
		{
			s++;
			c++;
			return (c);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
