#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: str to be printed between the str
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	const char *snt;

	va_start(ap, n);

	for (i = 0; (unsigned int)i < n; i++)
	{
		snt = va_arg(ap, char*);
		if (snt == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", snt);
		}

		if ((unsigned int)i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
