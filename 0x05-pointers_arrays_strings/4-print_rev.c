#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string pointer
 */

void print_rev(char *s)
{
	int rf, cb;
	int prev = 0;

	for (rf = 0; s[rf] != '\0'; rf++)
	{
		prev++;
	}
	for (cb = (prev - 1); cb >= 0; cb--)
	{
		_putchar(s[cb]);
	}
	_putchar('\n');
}
