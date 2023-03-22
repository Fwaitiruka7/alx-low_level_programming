#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print in the program
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
