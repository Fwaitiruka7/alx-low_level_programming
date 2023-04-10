#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: int represnter
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask_val = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int  no_zero = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask_val > 0)
	{
		if ((n & mask_val) || no_zero)
		{
			_putchar((n & mask_val) ? '1' : '0');
			no_zero = 1;
		}
		mask_val = mask_val >> 1;
	}
}
