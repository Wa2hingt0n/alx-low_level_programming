#include "main.h"

/**
 * rot13 - Encodes a string using Rot13
 * @s: String to be encoded
 *
 * Description: Each alphabetic character in the string is replaced by the
 * thirteenth letter after it on the alphabet
 * Return: The encoded string
 */

char *rot13(char *s)
{
	int index1, index2;
	char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			   'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			   'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
			   'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			   'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			   'y', 'z'};
	char rot13[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
			'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	index1 = 0;
	while (s[index1] != '\0')
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (s[index1] == alphabet[index2])
			{
				s[index1] = rot13[index2];
				break;
			}
		}
		index1++;
	}

	return (s);
}
