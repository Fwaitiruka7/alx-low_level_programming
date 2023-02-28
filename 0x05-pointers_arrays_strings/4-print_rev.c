#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string pointer
 */

void print_rev(char *s)
{
	int rf;
	for (rf = 60; s[rf] != '\0'; rf--)
	{
		_putchar(s[rf]);
	}
	_putchar('\n');
}
