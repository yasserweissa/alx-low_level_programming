#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message to the standard error stream.
 * @code: The error code to indicate the type of error.
 * @message: The error message to display.
 * Return: This function does not return a value. It prints the error message.
 */
void print_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - Entry point, program to copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 if successful, (97 or 98 or 99 or 100) in case of errors.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, buffer[BUFFER_SIZE];
	int fd_source, fd_dest;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");

	file_from = argv[1];
	file_to = argv[2];
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
		print_error(98, "Can't read from file");
	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		close(fd_source);
		print_error(99, "Can't write to file");
	}
	while ((bytes_read = read(fd_source, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_source);
			close(fd_dest);
			print_error(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_source);
		close(fd_dest);
		print_error(98, "Can't read from file");
	}
	if (close(fd_source) == -1)
		print_error(100, "Can't close fd");

	if (close(fd_dest) == -1)
		print_error(100, "Can't close fd");
	return (0);
}
