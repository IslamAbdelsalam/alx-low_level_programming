#include "main.h"

/**
 * create_array - this function will create array using malloc and pointer
 *
 * @size: the size of the string
 *
 * @c: first character in our array or 'string'
 *
 * Return: pointer to our array/
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size * sizeof(char));

	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
			str[i] = c;
	}
	return (str);
}
