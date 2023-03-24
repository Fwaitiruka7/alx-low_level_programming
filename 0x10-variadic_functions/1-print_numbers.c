#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i;

	va_start(ap, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if ((unsigned int)i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
