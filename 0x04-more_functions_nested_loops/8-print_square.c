#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (r = 2; r <= size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
