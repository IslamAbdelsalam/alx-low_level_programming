#include "main.h"
/**
 * copy - it will operate like cp in terminal
 * @source: path to source file
 * @target: path to past the source copy
 *
 */
void copy(char *source, char *target)
{
	int o_source, o_target, checkWrite, checkClose;
	char *buffer[1024];
	ssize_t n;
	mode_t new_perms = 0664;

	o_source = open(source, O_RDONLY);
	if (o_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	o_target = open(target, O_RDWR | O_TRUNC);
	if (o_target == -1)
	{
		o_target = creat(target, new_perms);
		chmod(target, new_perms);
	}
	if (o_target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
		exit(99);
	}
	while ((n = read(o_source, buffer, sizeof(buffer))) > 0)
	{
		checkWrite = write(o_target, buffer, n);
		if (checkWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
	}
	checkClose = close(o_source);
	if (checkClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_source);
		exit(100);
	}
	close(o_target);
}

/**
 * main - main function --start--
 * @argc: argument counter
 * @argv: pointer to argument vector
 *
 * Return: (0) if it success
 * Author: Islam Abdelslam
 */
int main(int argc, char **argv)
{
	if (argc != 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s %s\n", argv[0], argv[1], argv[2]);
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}
