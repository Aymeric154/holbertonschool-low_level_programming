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
	char fd_str[20];

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", source);

	fd_to = open(target, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", target);
	}

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

	if (close(fd_from) == -1)
	{
		sprintf(fd_str, "%d", fd_from);
		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}

	if (close(fd_to) == -1)
	{
		sprintf(fd_str, "%d", fd_to);
		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
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

