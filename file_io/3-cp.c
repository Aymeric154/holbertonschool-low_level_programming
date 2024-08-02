#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *msg, const char *file_name) {
	dprintf(STDERR_FILENO, msg, file_name);
	exit(code);
}

int open_file(const char *file_name, int flags, mode_t mode) {
	int fd = open(file_name, flags, mode);
	if (fd == -1) {
		error_exit(98, "Error: Can't read from file %s\n", file_name);
	}
	return fd;
}

int create_file(const char *file_name) {
	int fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1) {
		error_exit(99, "Error: Can't write to %s\n", file_name);
	}
	return fd;
}

void close_file(int fd, int *error_code) {
	if (close(fd) == -1) {
		*error_code = 100;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
}

void _cp(const char *source, const char *target) {
	int fd_from = open_file(source, O_RDONLY, 0);
	int fd_to = create_file(target);
	int error_code = 0;
	char buffer[1024];
	ssize_t bytes_read;
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
		if (write(fd_to, buffer, bytes_read) != bytes_read) {
			close_file(fd_from, NULL);
			close_file(fd_to, NULL);
			error_exit(99, "Error: Can't write to %s\n", target);
		}
	}

	if (bytes_read == -1) {
		close_file(fd_from, NULL);
		close_file(fd_to, NULL);
		error_exit(98, "Error: Can't read from file %s\n", source);
	}

	close_file(fd_from, &error_code);
	close_file(fd_to, &error_code);

	if (error_code) {
		exit(error_code);
	}
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	}

	_cp(argv[1], argv[2]);

	return 0;
}


