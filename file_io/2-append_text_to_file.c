#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int add_file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	add_file = open(filename, O_WRONLY | O_APPEND);

	if (add_file == -1)
	{
		close(add_file);
		return (-1);
	}
	while (text_content[len])
	{
		len++;
	}

	wr = write(add_file, text_content, len);

	close(add_file);

	if (wr == -1)
	{
		return (-1);
	}
	return (1);
}
