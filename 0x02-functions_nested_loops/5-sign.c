#include "main.h"
/**
 * print_sign - prints the sign of the number
 *
 * @n: is the integer to be used
 *
 * Return 1 if n > zero, 0 if n == zero and -1 if n < zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

