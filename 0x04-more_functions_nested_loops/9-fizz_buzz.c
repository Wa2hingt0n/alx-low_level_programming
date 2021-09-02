#include <stdio.h>

/**
 * main - Prints numbers from 0-100
 *
 * Description: Prints numbers from 0-100, where if number is multiple of 3,
 * print Fizz, if its a multiple of five, print Buzz, and if its a multiple of
 * both 3 and 5, prints FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
			printf("Fizz ");
		else if ((n % 5 == 0) && (n % 3 != 0))
			printf("Buzz ");
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		else if (n == 100)
			printf("Buzz");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
