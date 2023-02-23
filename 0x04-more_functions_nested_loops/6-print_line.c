#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n:  number x the character _ should be printed
 */
void print_line(int n)
{
	int m;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
