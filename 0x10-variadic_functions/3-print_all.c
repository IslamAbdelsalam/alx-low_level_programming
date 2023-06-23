#include "variadic_functions.h"

/**
 * print_all - will print the arguments of any type that we declared
 * @format: check this string to get the specifier...
 *
 * Author: Islam Abdelslam *__=
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, len = strlen(format);
	char *str;
	const char *formatSet = "csif";

	va_start(args, format);
	while (len--)
	{
		if (format[i] == 'c')
		{
			printf("%c", (va_arg(args, int)));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			switch (str[0])
			{
				case '\0':
					printf("(nil)");
					break;
				case !'\0':
					printf("%s", str);
					break;
			}
		}
		if (format[i + 1] != '\0' && strchr(formatSet, format[i]) != NULL)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
