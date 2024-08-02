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
 *
 * Description: This function prints a formatted error message to the
 * standard error output, then exits the program with the specified
 * exit code.
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another
 * @src: The path to the source file
 * @dest: The path to the destination file
 *
 * Description: This function opens the source file and the destination
 * file, copies the content from the former to the latter in blocks of
 * BUFFER_SIZE bytes, and then closes both files. It handles errors for
 * opening, reading, writing, and closing the files.
 */
void copy_file(const char *src, const char *dest)
{
	int fd_from, fd_to;
	ssize_t nread;
	char buffer[BUFFER_SIZE], fd_str[20];

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", src);

	fd_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", dest);
	}

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", dest);
		}
	}
	if (nread == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", src);
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
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, otherwise exits with an error code
 *
 * Description: This function checks if the correct number of arguments
 * is provided, then calls copy_file to perform the file copy operation.
 * If the number of arguments is incorrect, it prints a usage message
 * and exits the program.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);

	copy_file(argv[1], argv[2]);
	return (0);
}
