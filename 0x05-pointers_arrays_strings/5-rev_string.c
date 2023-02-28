#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: character to be used
 */

void rev_string(char *s)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
		c++;
	}
	_putchar('\n');
	
	for (b = (c - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
