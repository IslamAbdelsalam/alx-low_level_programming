#include "main.h"

/**
 * _atoi - will convert the string to int
 * @str: the input for my function
 * Return: int
 *
*/

int _atoi(char *str)
{
	int res = 0;
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
