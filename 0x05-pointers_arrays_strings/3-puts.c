#include "main.h"

/**
 * _puts - function that prints a string
 * @str: character to be printed
 */

void _puts(char *str)
{
	int fr;

	for (fr = 0; str[fr] != '\0'; fr++) /*fr will act as temp. var*/
	{
		_putchar(str[fr]);
	}
	_putchar('\n');
}
