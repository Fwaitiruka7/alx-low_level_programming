#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 *
 * Return: 1 if identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int c = 0;

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}

	else
	{
		if (s1[c] == s2[c])
		{
			return (1);
		}

		else
		{
			return (0);
		}

		c++;
		wildcmp(s1 + 1, s2 + 1);
	}
	return (0);
}
