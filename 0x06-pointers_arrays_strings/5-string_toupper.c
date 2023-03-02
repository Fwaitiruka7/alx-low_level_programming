#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters 
 * of a string to uppercase
 * Return: upper case of the sring
 */

char *string_toupper(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (str[s] >= 'a' && str[s] <= 'z')
		{
			str[s] = (int)str[s] - 32;
		}
	}
	return (str);
}
