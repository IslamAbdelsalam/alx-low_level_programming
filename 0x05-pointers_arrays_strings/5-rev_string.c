#include "main.h"

/**
 * rev_string - print our string in reverse
 * @s: pointer to our string
 */
void rev_string(char *s)
{
	int i, size, j;
	char temp;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	size--;
	j = size / 2;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[size];
		s[size] = temp;
		size--;
	}
}
