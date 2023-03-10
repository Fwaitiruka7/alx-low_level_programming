#include <stdio.h>
#include "main.h"
/**
 * main - prints it name followed by \n
 * @argc: number of arguments passedm
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[0]);
		printf("\n");
	}

	return (0);
}
