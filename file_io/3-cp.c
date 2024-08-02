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

void error_exit(int code, const char *msg, int value)
{
	if (value == -1)
	{
		dprintf(STDERR_FILENO, msg);
	}
	else
	{
		dprintf(STDERR_FILENO, msg, value);
	}
	exit(code);
}


/**
 * op_files - Opens the source and target files with appropriate flags.
 * @source: Path to the source file.
 * @target: Path to the target file.
 * @fd_from: Pointer to an integer
 * @fd_to: Pointer to an integer
 */

void op_files(const char *source, const char *target, int *fd_from, int *fd_to)
{
	*fd_from = open(source, O_RDONLY);
	if (*fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", source);
	}

	*fd_to = open(target, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		error_exit(99, "Error: Can't write to %s\n", target);
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
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	int error_code = 0;

	op_files(source, target, &fd_from, &fd_to);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", target);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", source);
	}

	if (close(fd_from) == -1)
	{
		error_code = 100;
		error_exit(error_code, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error_code = 100;
		error_exit(error_code, "Error: Can't close fd %d\n", fd_to);
	}

	if (error_code)
	{
		exit(error_code);
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
		error_exit(97, "Usage: cp file_from file_to\n", -1);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

