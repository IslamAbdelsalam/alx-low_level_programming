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
 * Return: 0 if everything is ok 1 if arguments les than 2
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
