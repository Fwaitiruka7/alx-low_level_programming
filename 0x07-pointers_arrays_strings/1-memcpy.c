#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @n: bytes to be copied
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];

	}
	return (dest);
}
