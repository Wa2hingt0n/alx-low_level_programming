#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: Character to be checked
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;

	return (result);
}
