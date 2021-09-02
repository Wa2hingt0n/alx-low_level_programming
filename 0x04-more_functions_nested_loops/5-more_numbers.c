#include "main.h"

/**
 * more_numbers - Print numbers 0 to 14 ten times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, line, repeat, limit;

	n = '0';
	repeat = 0;
	limit = '9';

	for (line = 0; line < 10; line++)
	{
		while (repeat < 2)
		{
			while (n <= limit)
			{
				if (limit == '4')
					_puchar('1');
				_putchar(n);
				n++
			}
			repeat++
			limit = '4';
			n = '0';
		}
		_putchar('\n');
		repeat = 0;
		n = '0';
		limit = '9';
	}

}
