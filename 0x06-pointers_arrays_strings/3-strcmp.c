#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative integer if s1<s2, positive integer if s1>s2, 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len1 < len2)
		return (-15);
	else if (len1 == len2)
		return (0);
	else
		return (15);
}
