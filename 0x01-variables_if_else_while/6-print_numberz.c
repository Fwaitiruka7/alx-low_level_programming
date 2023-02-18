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
	/* for loop statement for  single digit increment */

	for (number_x = 0; number_x < 10; number_x++)
		putchar((number_x % 10) + '0');

	putchar('\n');

	return (0);
}
