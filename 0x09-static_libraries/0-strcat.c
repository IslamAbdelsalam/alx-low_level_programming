#include "main.h"
/**
 * _strcat - this function will concat 2 string
 *
 * @src: pointer to the source of string
 *
 * @dest: pointer to the destenation that we will copy string to
 *
 * Return: our destenation that we will concat the string in
 */
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
