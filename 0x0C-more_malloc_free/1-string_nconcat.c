#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n:  Number of bytes of second string to concatenate
 *
 * Return: Allocated space in memory containing s1 and s2 concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len;

	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + n + 1));
	if (s == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
	{
		s[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];

	s[len] = '\0';
	return (s);
}
