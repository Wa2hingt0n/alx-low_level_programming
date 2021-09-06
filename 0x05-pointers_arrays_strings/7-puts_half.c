#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
		i++;
	max = i;
	if (max % 2 == 0)
	{
		j = max / 2;
		while (j < max)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (max - 1) / 2;
		j++;
		while (j < max)
		{
			_putchar(str[j]);
			j++;
		}
	}

	_putchar('\n');
}
