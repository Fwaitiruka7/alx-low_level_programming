#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer pointer
 * @index: starting point
 * Return: 1 if successful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int range = sizeof(unsigned long int) * 8;

	if (index >= range)
	{
		return (-1);
	}

	else
	{
		*n = *n & ~(1UL << index);
	}
	return (1);
}