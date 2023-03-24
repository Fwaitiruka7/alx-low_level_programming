#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of aruments passed to the func
 * c: char, i: int, f: float, s: char *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int num_list, n, i;
	float f;
	char c, *s;

	va_start(ap, format);

	while (format && format[n] != '\0')
	{
		switch (format[n])
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%1f, ", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("nil");
				if (s != NULL)
					printf("%s, ", s);
				break;
			default:
				break;
		}
		n++, num_list++;
	}
	printf("\n");
	va_end(ap);
}
