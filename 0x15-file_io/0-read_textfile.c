#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads and prints text to POSIX stdout
 * @filename: pointer variable
 * @letters: number of letters
 * Return: 0 if file can't be read/opened, if filename is NULL & can't write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char *buffer = (char *) malloc(sizeof(char) * letters);
	size_t read_fl = fread(buffer, sizeof(char), letters, fp);
	ssize_t write_fl = write(STDOUT_FILENO, buffer, read_fl);

	if (filename == NULL)
	{
		return (0);
	}
	if (fp == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	if (read_fl == 0 || ferror(fp))
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	if (write_fl == -1 || write_fl != (ssize_t) read_fl)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);
	return (read_fl);
}
