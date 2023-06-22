#include "variadic_functions.h"

/**
 * print_numbers - will print the arguments with the
 *					separator is found...
 * @n: Number of arguments
 * @separator: Arguments separator
 *
 * Return: non.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
	{
		int x;

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
	}
	else
	{
		int x;

		for (i = 0; i < n - 1; i++)
		{
			x = va_arg(args, int);
			printf("%d%s", x, separator);
		}
		x = va_arg(args, int);
		printf("%d", x);
	}
	printf("\n");
}
