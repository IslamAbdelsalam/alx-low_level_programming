#include "main.h"

/**
 *_strdup - this function will create arry of characters
 *				and copy string from input into this new array'string'
 *
 * @str: our string we need to copy it to new array.
 *
 * Return: pointer to our array
 */

char *_strdup(char *str)
{
	unsigned int size = strlen(str), i;

	char *str_arr = malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; ++i)
			str_arr[i] = str[i];
	}

	return (str_arr);
}
