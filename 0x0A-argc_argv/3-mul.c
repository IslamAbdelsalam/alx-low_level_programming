#include "main.h"

/**
 * main - our main function
 *
 * atoi - my funnction to convert every char to number
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%0.0f\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

/**
 * atoi - my funnction to convert every char to number
 * @str: our argument to get string
 *
 * Return: res is converted string to int
 */
float atoi(char *str)
{
	int i;
	float res = 0;

	for (i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
