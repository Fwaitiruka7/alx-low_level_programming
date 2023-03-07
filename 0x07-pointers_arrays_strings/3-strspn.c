#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:  initial segment
 * @accept: segment we need to accept
 * Returns: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int l;
	int n = 0;

	for (l = 0; accept[l] != '\0'; l++)
	{
		if (n == accept[l])
		{
			break;

		}
		if (accept[l] == s[n])
		{
			n++;
		}
	}
	return (n);
}
