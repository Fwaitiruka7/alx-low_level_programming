#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numb of interger parameter to sum
 * @...: interger parameter to sum
 * Return: sum of all parameters and if n is equal to 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	else
	{
		sum = 0;
		for (i = 0; (unsigned int)i < n; i++)
		{
			sum += va_arg(ap, unsigned int);
		}
	}
	va_end(ap);
	return (sum);
}
