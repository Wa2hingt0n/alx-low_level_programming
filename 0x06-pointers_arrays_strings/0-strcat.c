#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: pointer to the string onto which to append another string
 * @src: string to be concatenated to another
 *
 * Return: The concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
