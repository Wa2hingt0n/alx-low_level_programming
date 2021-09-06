#include "main.h"

/**
 * _strcpy - Copies a string pointer to another string pointer
 * @dest: Pointer to string to copy to
 * @src: Pointer to string to be copied
 *
 * Return: Pointer to *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[i] = *(src + i);
	dest[i] = '\0';

	return (dest);
}
