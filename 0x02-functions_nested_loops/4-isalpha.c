#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *@c: The character to be checked
 *
 * Return: 1 for alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	int letter;

	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		letter = 1;
	else
		letter = 0;

	return (letter);
}
