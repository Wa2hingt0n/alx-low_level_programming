#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be read
 * @letters: Number of letters to be read and printed
 *
 * Return: Actual number of letters read and printed
 *         0 if: - File cannot be opened or read
 *               - filename is NULL
 *               - write fails or does not write expected number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	buf[letters + 1] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buf);

	return (bytes_read);
}
