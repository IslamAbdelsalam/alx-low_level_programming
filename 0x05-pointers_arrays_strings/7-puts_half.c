#include "main.h"
/**
 * puts_half - print our even char in our string
 * @str: pointer to our string
 */
void puts_half(char *str)
{
	int i, size;

	size = 0;
	for (i = 0; str[i] != '\0'; i++)
		size++;
	size--;
	for (i = 0; i < size; i++)
	{
		if (i > (size / 2))
			_putchar(str[i]);
	}
	_putchar(10);
}
