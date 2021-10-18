#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * str_len - Returns the length of a string
 * @str: String whose length is to be determined
 *
 * Return: - (1) on success
 *         - (-1) on failure
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;
	int i;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: File to append text to
 * @text_content: String to append to the end of the file filename
 *
 * Return: - (1) on success
 *         - (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	unsigned int length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	else
	{
		length = str_len(text_content);
	}

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
