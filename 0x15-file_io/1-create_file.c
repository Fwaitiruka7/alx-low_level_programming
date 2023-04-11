#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: terminated str to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	int count = strlen(text_content), str;

	if (filename == NULL)
	{
		return (-1);
	}

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		str = write(file, text_content, count);
		if (str == -1)
		{
			return (-1);
		}
	}

	close(file);
	return (1);
}
