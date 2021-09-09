#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * @s: String to be capitalized
 *
 * Return: String with uppercase letters
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	s[i] = '\0';

	return (s);
}
