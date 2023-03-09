#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a str
 * @s: string to be measured
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	else
	{
		len++;
		return (1 + _strlen_recursion(1 + s));
	}
}
