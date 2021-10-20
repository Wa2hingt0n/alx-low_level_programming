#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_error - Prints an error message to POSIX std err and exits the program
 * @err_no: The error exit code
 *
 * Return: Nothing
 */
void print_error(int err_no, ...)
{
	va_list err;

	va_start(err, err_no);
	if (err_no == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (err_no == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, va_arg(err, char *));
		exit(98);
	}
	if (err_no == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
			, va_arg(err, char *));
		exit(99);
	}
	if (err_no == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n"
			, va_arg(err, int));
		exit(100);
	}
	va_end(err);
}

/**
 * main - Copies content of one file to another file.
 * @argc: Number of arguments passed to the program
 * @argv: Arguments passed the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, read_bytes, written_bytes;
	char *buf[1024];

	if (argc != 3)
		print_error(97);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		print_error(98, argv[1]);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		print_error(99, argv[2]);

	while ((read_bytes = read(fd1, buf, 1024)) > 0)
	{
		written_bytes = write(fd2, buf, read_bytes);
		if (written_bytes == -1)
			print_error(99, argv[2]);
	}

	if (close(fd1) == -1)
		print_error(100, fd1);
	if (close(fd2) == -1)
		print_error(100, fd2);

	return (0);
}
