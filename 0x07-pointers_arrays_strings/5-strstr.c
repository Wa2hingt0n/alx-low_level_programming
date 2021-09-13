#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String on which substring is to be located
 * @needle: Substring to be located
 *
 * Return: Pointer to the beginning of the located substring, Null otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
