#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on wha\
t comes.\nhello world! hello-world 0123456hello world\thello world.hello world\
\n";
	char *ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
