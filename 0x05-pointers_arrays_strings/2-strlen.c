#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: char to use
 * Return: 0
 */

int _strlen(char *s)
{
	int r = 1;
	int sum = 0;
	char st = s[0];

	while (st != '\n')
	{
		sum++;
		st = s[r++];
	}

	return (sum);
}
