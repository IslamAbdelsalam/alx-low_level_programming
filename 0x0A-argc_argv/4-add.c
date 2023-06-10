#include "main.h"

/**
 * main - Adds positive numbers using argv & argv.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if it faild when input isn't a number
 *		1 if the symbol can't be a number
 *		result if everything is Ok.
*/
int main(int argc, char *argv[])
{
	int i;
	int res = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			if (atoi(argv[i]))
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (printf("%d\n", res));
}
