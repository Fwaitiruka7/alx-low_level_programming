#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to check for uppercase char
 * @c: the character to be used
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
