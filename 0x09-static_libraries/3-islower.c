#include "main.h"

/**
 * _islower - test whether int c is lowercase
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
