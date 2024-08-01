#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 *  prints it to the POSIX standard output.
 *
 *  @filename: name of the file to read
 *  @letters: number of letters to read and print
 *
 *  Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, file;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}

	r = read(file, text, letters);
	if (r == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	w = write(STDOUT_FILENO, text, r);
	if (w == -1 || w != r)
	{
		free(text);
		close(file);
		return (0);
	}

	free(text);
	close(file);

	return (w);
}
