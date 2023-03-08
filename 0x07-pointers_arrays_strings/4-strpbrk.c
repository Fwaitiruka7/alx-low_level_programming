#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string to compared
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return (s);
		}
		else if (s[i] != accept[i])
		{
			return (0);
		}
	}
	return (0);
}
