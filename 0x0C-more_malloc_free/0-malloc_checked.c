#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdint.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int to be used
 * Return: if success return pointer, if it fails return 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned *ptr;
	ptr = malloc(b);

	/*error*/
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
