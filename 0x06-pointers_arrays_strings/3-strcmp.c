#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 0 Always
 */

int _strcmp(char *s1, char *s2)
{
	int rio;

	for  (rio = 0; s1[rio] != '\0' && s2[rio] != '\0'; rio ++)
	{
		if (s1[rio] != s2[rio])
		{
			return(s1[rio] - s2[rio]);
		}
	}
	return (0);
}
