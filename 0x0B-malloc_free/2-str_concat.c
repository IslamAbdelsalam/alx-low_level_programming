#include "main.h"

/**
 *str_concat - let's make our string concatenation function
 *
 * @s1: 1th string.
 * @s2: 2th string.
 *
 * Return: pointer to our array that inside it our concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size_s1, size_s2, i;
	char *str_arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	/* printf("Size = %d\n", size); */
	str_arr = malloc((size_s1 + size_s2) * sizeof(char) + 1);

	if (s1 == NULL && s2 == NULL)
		return (str_arr = "\0");

	if (str_arr == NULL)
		return (NULL);

	for (i = 0; i < size_s1; ++i)
		str_arr[i] = s1[i];

	size_s2 += size_s1;

	for (; i < size_s2; i++)
		str_arr[i] = s2[i - size_s1];

	str_arr[size_s2 + 1] = '\0';

	return (str_arr);
}
