#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to be evaluated for its length
 *
 * Return: Length of string excluding the terminating null byte
 */

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s)
	{
		num++;
		num  = num + _strlen_recursion(s + 1);
	}

	return (num);
}
