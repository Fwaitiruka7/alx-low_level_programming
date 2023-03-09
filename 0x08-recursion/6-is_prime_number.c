#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input integer to be checked
 * Return: if prime number returns 1 otherwise 0
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		if (n == 2 || n == 3)
		{
			return (1);
		}

		else if (n == (6 * n + 1))
		{
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}
