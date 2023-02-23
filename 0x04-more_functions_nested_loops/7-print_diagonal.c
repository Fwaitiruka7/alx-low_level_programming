#include "main.h"

/**
 * print_diagonal - function that draws a straight line
 * @n:  number x the character \ should be printed
 */
void print_diagonal(int n)
{
	int m, my_spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (my_spc = 1; my_spc < m; my_spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
