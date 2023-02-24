#include "main.h"

/**
 * print_triangle - prints a square
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int r, c, tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (my_sp = 0; my_sp < (size - 1) - r; r++)
			{
				_putchar(' ');
			}
			for (tri = 0; tr <= r; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
