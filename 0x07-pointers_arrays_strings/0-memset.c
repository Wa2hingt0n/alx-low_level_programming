#include "main.h"

/**
 * _memset - Fills memory with a constatnt byte
 * @s: Address of memory to be filled
 * @b: The constant byte to be filled into memory
 * @n: number of bytes of memory to be filled
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
