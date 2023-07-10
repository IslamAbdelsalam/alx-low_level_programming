#include "main.h"

/**
 * read_textfile - Read a text file and print its contents to the console.
 * @filename: The name of the file to be read.
 * @letters: The maximum number of characters to be read.
 *
 * Return: The number of characters read and printed, or 0 on failure.
 *         Possible failure reasons include failure to open or read the file,
 *         an empty file, or a letters parameter of 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, readFile, len = 0;
	char *buffer = (char *)malloc(sizeof(char) * letters);

	if (filename == NULL || letters == 0 || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	readFile = read(fd, buffer, letters);
	len = write(STDOUT_FILENO, buffer, readFile);

	if (fd == -1 || readFile == -1 || len == -1 || readFile != len)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (len);
}
