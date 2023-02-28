#include <main.h>
/**
 * puts2 - print our even char in our string
 * @str: pointer to our string
 */
void puts2(char *str)
{
	int size = 0, i, j;

	for (i = 0; str[i] != '\0'; i++)
		size++;
	size--;

	for (j = 0; j < size; j++)
	{
		_putchar(str[j]);
	}
}
