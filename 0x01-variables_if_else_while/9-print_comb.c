#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number_x;

	for (number_x = 0; number_x < 10; number_x++)
	{
		putchar((number_x % 10) + '0');

		if (number_x == 9)
			continue;

		putchar (',');
		putchar (' ');
	}

	putchar('\n');

	return (0);
}
