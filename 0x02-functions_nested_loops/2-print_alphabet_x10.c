#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 10)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	i++;
	_putchar('\n');
	}

}
