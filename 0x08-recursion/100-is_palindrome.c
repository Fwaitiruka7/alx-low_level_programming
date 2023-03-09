#include "main.h"

/**
 * is_palindrome - function to check if its palindrome
 * @s: character string to be checked
 * Return: 1 if its palindrome and 0 if its not
 */

int is_palindrome(char *s)
{
	int sc = 0;
	int ec = 0;

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		if (s[sc] == s[ec])
		{
			return (1);
		}

		else if (s[sc] != s[ec])
		{
			return (0);
		}
		else if (s[sc] < *s / 2)
		{
			sc++;
			ec--;
			is_palindrome(s);
		}
	}
	return (0);
}
