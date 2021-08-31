#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 *Return: 1 if character is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	int letter;

	if ((c >= 97) && (c <= 122))
		letter = 1;
	else
		letter = 0;

	return (letter);
}
