#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exec a function given an array's parameter
 * @array: array to be executed
 * @size: array size
 * @action: pointer to function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
