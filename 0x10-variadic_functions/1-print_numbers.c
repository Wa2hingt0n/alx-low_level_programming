#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n == 0 || separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
	}
	printf("\n");
}
