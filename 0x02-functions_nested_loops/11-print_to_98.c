#include "main.h"
#include <stdlib.h>

/**
 *print_to_98 - prints all natural numbers until 98
 *@x: the number from which the count begins
 *
 */
void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	}
	else
	{
		while (x < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
}
