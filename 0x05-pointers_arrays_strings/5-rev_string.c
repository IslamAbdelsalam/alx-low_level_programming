#include "main.h"

/**
 * rev_string - print our string in reverse
 * @s: pointer to our string
 */
void rev_string(char *s)
{
	int i, size;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		size++;
	}
	_putchar(10);
	size--;
	for (i = size; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
