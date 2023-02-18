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
	char PP1;

	/* for loop to create lowercase alphabests */
	for (PP1 = 'a'; PP1 <= 'z'; PP1++)
	{
		if (PP1 != 'q' && PP1 != 'e')
			putchar (PP1);
	}
	putchar ('\n');
	return (0);
}
