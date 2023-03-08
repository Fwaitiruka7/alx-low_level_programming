#include "main.h"

/**
 * _print_rev_recursion - prints in reverse
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	int forwd = *s + 1;
	int backwd = *s -1;
	char cent;

	/*base area*/
	if (*s != '\0' || forwd > backwd)
	{
		_putchar('\n');
	}
	
	/*recrusion reverse*/
	else
	{
		cent = s[forwd];
		s[forwd] = s[backwd];
		s[backwd] = cent;
		_putchar(*s);
	}



}
