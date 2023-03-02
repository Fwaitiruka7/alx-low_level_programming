#include "main.h"
 /**
  * _strcat - function that concatenates two strings
  * @dest: pointer to destination array
  * @src: the string to be appended
  * Returns: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int d, n;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (n = 0; (dest[d + n] = *src++) != '\0'; n++)
	{
	}
	return(dest);
}
