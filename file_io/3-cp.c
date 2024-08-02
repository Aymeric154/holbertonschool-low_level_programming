#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and
 * exits the program with a given code.
 * @code: The exit code for the program.
 * @msg: The format string for the error message.
 * @value: An optional integer value to be included
 * in the error message.
 */

void error_exit(int code, const char *msg, const char *value)
{
	if (value)
		dprintf(STDERR_FILENO, msg, value);
	else
		dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}

/**
 * open_file - Opens a file and handles potential errors
 * @path: The path to the file to be opened
 * @flags: The flags to be used when opening the file
 * @mode: The mode to be used when creating a new file
 *
 * Return: The file descriptor of the opened file
 */

int open_file(const char *path, int flags, mode_t mode)
{
	int fd = open(path, flags, mode);

	if (fd == -1)
	{
		if (flags & O_RDONLY)
			error_exit(98, "Error: Can't read from file %s\n", path);
		else
			error_exit(99, "Error: Can't write to %s\n", path);
	}
	return (fd);
}

/**
 * close_file - Closes a file and handles potential errors
 * @fd: The file descriptor to be closed
 */


void close_file(int fd)
{
	char fd_str[20];

	if (close(fd) == -1)
	{
		sprintf(fd_str, "%d", fd);
		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
}

/**
 * cp_file - Copies the content from the source file
 * to the target file.
 * @source: Path to the source file.
 * @target: Path to the target file.
 */

void cp_file(const char *source, const char *target)
{
	int fd_from, fd_to;
	ssize_t nread;
	char buf[1024];

	fd_from = open_file(source, O_RDONLY, 0);
	fd_to = open_file(target, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((nread = read(fd_from, buf, sizeof(buf))) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", target);
		}
	}

	if (nread == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", source);
	}

	close_file(fd_from);
	close_file(fd_to);
}
/**
 * main - Entry point of the program.
 * Validates arguments and starts the file copy process.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, exits with code 97 on argument error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	}

	cp_file(argv[1], argv[2]);

	return (0);
}

