/** 
 * puts - write a line to the output
 *
 * Description: Its used to write a line or string to the output filestream.
 * It also appends a newline character to output.
 * Return: Always zero (success)
*/

#include <stdio.h>

int main(void)
{
	char my_string[] = "Programming is like building a multilingual puzzle";

	puts (my_string);
	return (0);
}
