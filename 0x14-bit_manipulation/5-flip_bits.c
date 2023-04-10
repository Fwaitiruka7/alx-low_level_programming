#include <stdio.h>
#include "main.h"

/**
 * flip_bits - return number of bits needed to be fliped
 * @n: first integer
 * @m: second integer
 * Return: number to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int lp1, lp2;

	while (n > 0 || m > 0)
	{
		lp1 = n & 1;
		lp2 = m & 1;

		if (lp1 != lp2)
		{
			count++;
		}

		n = n >> 1;
		m = m >> 1;
	}
	return (count);

}
