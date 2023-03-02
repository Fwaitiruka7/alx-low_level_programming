#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string array
 * @n: the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int bk;

	for (bk = 0; bk < n/2; bk++)
	{
		temp = a[bk];
		a[bk] = a[n - bk - 1];
		a[n - bk - 1] = temp;
	}
	for (bk = 0; bk < n; bk++)
	{
	}
}
