#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Description: Checks whether a character is uppercase and returns a result
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;

	return (result);
}
