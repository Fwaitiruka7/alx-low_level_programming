#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer pointer
 * @index: index starting from 0
 * Return: 1 if success and -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int range = sizeof(unsigned long int) * 8;

	if (index >= range)
	{
		return (-1);
	}

	else
	{
		*n = *n | 1UL << index;
	}
	return (1);
}
