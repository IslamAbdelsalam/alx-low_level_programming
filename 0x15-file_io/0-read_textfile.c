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
	int fd, readFile;
	size_t i = 0, len = 0;
	char *buffer = (char *)malloc(letters + 100);

	if (filename == NULL || letters == 0 || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	readFile = read(fd, buffer, letters);

	if (readFile < 0)
		return (0);

	for (; i < letters && buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		len++;
	}

	if (readFile < (int)letters || readFile == 0)
	{
		len++;
		_putchar('\0');
	}

	close(fd);
	free(buffer);
	return (len);
}
