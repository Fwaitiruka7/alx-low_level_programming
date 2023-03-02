#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: the capitilized string
 */

char *cap_string(char *str)
{
	int o, sc;
	int seps[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' '};

	for (o = 0; str[o] != '\0'; o++)
	{
		if ((o == 0 && str[o] == '\0') || (str[o] != ' ' && str[o - 1] == ' '))
		{
			if (str[o] >= 'a' && str[o] <= 'z')
			{
				str[o] = (int)str[o] - 32;
			}
			for (sc = 0; sc <= 12; sc++)
			{
				if (str[o] == seps[sc])
				{
					sc = 12;
				}
			}
		}
	}
	return (str);
}
