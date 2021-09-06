#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	while (str[i] != '\0')
		i++;

	n = i;
	if (n % 2 == 0)
	{
		j = n / 2;
		while (j <= n)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (n - 1) / 2;
		while (j <= n)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
