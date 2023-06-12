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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		str[0] = c;
	}
	return (str);
}
