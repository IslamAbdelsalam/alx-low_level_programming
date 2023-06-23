#include "variadic_functions.h"

/**
 * print_numbers - will print the arguments with the
 *					separator is found...
 * @n: Number of arguments
 * @separator: Arguments separator
 *
 * Author: Islam Abdelslam *__=
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
