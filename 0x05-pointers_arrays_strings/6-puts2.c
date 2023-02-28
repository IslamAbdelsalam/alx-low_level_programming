#include "main.h"
/**
 * puts2 - print our even char in our string
 * @str: pointer to our string
 */
void puts2(char *str)
{
	int size = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
