#include "main.h"

/**
 * *_strncpy - Copies the first n bytes of a string to another string
 * @dest: Destination string
 * @src: String to be copied
 * @n: Number of bytes to be copied
 *
 * Description: Copies the first n bytes of src onto dest, including the
 * terminating null character. Appends terminating null characters if src < n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if ((i + 1) < n)
	{
		for ( ; i < n; i++)
			dest[i] = '\0';
	}

	return (dest);
}
