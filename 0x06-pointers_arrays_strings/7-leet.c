#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to be encoded
 *
 * Return: Pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
		i++;
	}

	return (s);
}
