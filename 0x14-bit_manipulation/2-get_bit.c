#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index starting from 0
 * Return: value of index if successful or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int range = sizeof(unsigned long int) * 8;

	if (index >= range)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
