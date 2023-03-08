#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: the capitilized string
 */

char *cap_string(char *str)
{
	int o;
	int seps[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (o = 0; str[o] != '\0'; o++)
	{
		if (str[o] == seps[o])
		{
			++o;
			if (str[o] >= 'a' && str[o] <= 'z')
			{
				str[o] = (int)str[o] - 32;
			}
		}
	}
	return (str);
}
