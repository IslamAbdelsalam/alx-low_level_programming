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
	unsigned int size, i;
	char *str_arr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);
	printf("Size = %d\n", size);
	str_arr = malloc(size * sizeof(char) + 1);

	for (i = 0; i <= size; ++i)
		str_arr[i] = str[i];

	return (str_arr);
}
