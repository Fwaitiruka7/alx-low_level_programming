#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be used
 * @size: the number of elements
 * @cmp: function pointer for array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	else
	{
		if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		else
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
