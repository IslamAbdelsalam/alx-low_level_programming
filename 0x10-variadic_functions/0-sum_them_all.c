#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments provided to it
 * @n: number of arguments
 *
 * Return: result of summation.
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(args, int);
		result += num;
	}

	va_end(args);

	return (result);
}
