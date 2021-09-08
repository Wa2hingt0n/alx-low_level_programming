#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: Pointer to return string
 * @src: Pointer to string to be concatenated to dest
 * @n: Number of bytes of src string
 *
 * Description: Appends the first n bytes of src onto dest, and only terminates
 * with a null character if the number of bytes of src is < n.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if ((j - 1) < n)
		dest[i] = '\0';

	return (dest);
}
