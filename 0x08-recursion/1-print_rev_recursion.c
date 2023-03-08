#include "main.h"

/**
 * _print_rev_recursion - prints in reverse
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	/*variables *s, _print_rev_recursion, char f*/
	if (*s)
	{
		_print_rev_recursion(s + 1);
		s++;
		_putchar(*s);
	}
}
