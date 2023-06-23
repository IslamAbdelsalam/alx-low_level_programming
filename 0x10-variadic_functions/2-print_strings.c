#include "variadic_functions.h"

/**
 * print_strings - will print the arguments with the
 *					separator if found...
 * @n: Number of arguments
 * @separator: Arguments separator
 *
 * Author: Islam Abdelslam *__=
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *input;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		input = va_arg(args, char*);

		if (input == NULL)
			printf("(nil)");
		else
			printf("%s", input);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
