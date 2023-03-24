#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of aruments passed to the func
 * c: char, i: int, f: float, s: char *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int num_list, n, i, char c, *s, float f;

	va_start(ap, format);
	while (format[n] != '\0')
	{
		num_list++, n++;
	} n = 0;
	while (format[n] != '\0' && num_list > 0)
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
				{
					printf("nil");
				}
				printf("%s, ", s);
				} break;
			default:
				break;
		} num_list--, n++;
	} va_end(ap);
	printf("\n");
}
