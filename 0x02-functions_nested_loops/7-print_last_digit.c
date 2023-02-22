#include "main.h"

/**
 *print_last_digit - returns the value of the last digit
 *@x: value to be declared
 *Return: 0
 */

int print_last_digit(int x)
{
	int rio;

	rio = x % 10;
	if (rio < 0)
		rio *= -1;
	_putchar(rio + '0');

	_putchar('\n');
	return (0);
}
