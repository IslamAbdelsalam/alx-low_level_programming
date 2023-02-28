#include "main.h"
/**
 * puts2 - print our even char in our string
 * @str: pointer to our string
 */
void puts2(char *str)
{
	int size = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[j]);
	}
	_putchar(10);
}
