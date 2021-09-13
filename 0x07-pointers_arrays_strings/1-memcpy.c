#include "main.h"

/**
 * _memcpy - Copies an area of memory
 * @dest: Address of destination memory area
 * @src: Address of origin memory area
 * @n: Number of bytes of memory to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
