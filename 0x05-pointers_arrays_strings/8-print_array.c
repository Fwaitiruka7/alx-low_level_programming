#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be used
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	a[5] = {98, 402, -198, 298, -1024};

	for (n = 0; n < 5; n++)
		printf("%d ", *a);
}
