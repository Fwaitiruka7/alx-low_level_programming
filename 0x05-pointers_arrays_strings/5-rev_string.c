#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: character to be used
 */

void rev_string(char *s)
{
	/*declare my variables */
	char my_left = s[0];
	int my_right = 0, c;

	/*while loop*/
	while (s[my_right] != '\0')
		my_right++;
	for (c = 0; c < my_right; c++)
	{
		my_right--;
		my_left = s[c];
		s[c] = s[my_right];
		s[my_right] = my_left;
	}
}
