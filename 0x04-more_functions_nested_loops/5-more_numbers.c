#include "main.h"

/**
 * more_numbers - print the numbers x 10
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	while ( n < 10)
	{
		for (i = 0; i < 15; i++)
		{	
			if (i > 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
