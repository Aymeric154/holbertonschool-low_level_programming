#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program
 * @code: The exit code to use
 * @format: The format string for the error message
 * @arg: The argument to insert into the format string
 */

void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * error_file - Handles file-related errors
 * @file_from: The file descriptor of the source file
 * @file_to: The file descriptor of the destination file
 * @argv: The array of command-line arguments
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to, n;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_file_from = open(argv[1], O_RDONLY);

	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	error_file(fd_file_from, fd_file_to, argv);

	while ((n = read(fd_file_from, buffer, 1024)) > 0)
	{
		if ((write(fd_file_to, buffer, n)) != n || fd_file_to < 0)
		{
			error_file(0, -1, argv);
		}
	}

	if (n < 0)
	{
		error_file(-1, 0, argv);
	}

	if (close(fd_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}

	if (close(fd_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		exit(100);
	}
	return (0);
}
