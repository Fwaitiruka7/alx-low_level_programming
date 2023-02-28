#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: variables to be printed
 *
 */

void puts_half(char *str)
{
	int i;
	int n;
	int length_of_the_string;

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;

		n = (length_of_the_string / 2);
	}

	if ((n % 2) != 0)
	{
		n = (length_of_the_string + 1) / 2;
	}
	
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
