#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be scanned
 * @accept: String whose characters are to be matched
 *
 * Return: Number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i] == '\0')
				return (count);
		}
	}

	return (count);
}
