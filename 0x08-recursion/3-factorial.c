#include "main.h"

/**
 * factorial - function that returns the factorial of a given num
 * @n: the integer to be used
 * Return: if less than 0 return -1 and if greater or equal to 0 return 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
