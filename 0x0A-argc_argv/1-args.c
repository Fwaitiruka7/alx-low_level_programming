#include <stdio.h>
#include "main.h"

/**
 * main - prints the no. of args passed
 * @argc: number of arguments passed
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}

	printf("%d\n", i - 1);
	return (0);
}
