#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to be created or appended
 * @text_content: text content to be appended
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a+");

	if (filename == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		int str = fputs(text_content, file);

		if (str == EOF)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
