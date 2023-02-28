#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: character to be used
 */

void rev_string(char *s)
{
	int a = s[0], b;
	int c = 0;

	while (s[c] != '\0')
	{
		c++;

		for (b = 0; b < c; b++)
		{
			c--;
			a = s[b];
			s[b]= s[c];
			s[c] = a;
		}
	}
	_putchar('\n');
}
