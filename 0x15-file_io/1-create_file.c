#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: terminated str to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w+");

	if (filename == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fputs(text_content, file);
	}

	fclose(file);
	return (1);
}
