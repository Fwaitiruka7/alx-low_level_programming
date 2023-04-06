#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - convt a binary no. to an unsigned int
 * @b: pointer string
 * Return: converted no, 0 if char is not 0 - 1 and b if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int ck;
	unsigned int val = 0;

	if (b == NULL)
	{
		return ('b');
	}
	for (ck = 0; b[ck] != '\0'; ck++)
	{
		if (b[ck] == '0')
		{
			val = val << 1;
		}
		else if (b[ck] == '1')
		{
			val = (val << 1) | 1;
		}

		else
		{
			return (0);
		}
	}
	return (val);
}
