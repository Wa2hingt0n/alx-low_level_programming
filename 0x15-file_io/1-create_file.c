#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * str_len - Finds the length of a string
 * @str: The string whose length is to be found
 *
 * Return: Length of the string
 */
int str_len(char *str)
{
	int len = 0, i;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to the created file
 *
 * Return: - (1) on success
 *         - (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		length = 0;
		text_content = "";
	}

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
