#include "main.h"
/**
 * _strncpy - this function will concat 2 string but in length n
 *
 * @src: pointer to the source of string
 *
 * @dest: pointer to the destenation that we will copy string to
 *
 * @n: lenth of string that we will copy to dest
 *
 * Return: our destenation that we will concat the string in
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
