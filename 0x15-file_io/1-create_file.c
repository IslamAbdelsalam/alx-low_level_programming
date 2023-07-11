#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: relative path to the file or the name of it.
 * @text_content: text that er will write to our file
 *
 * Return: 1 on success
 *			-1 on: file can not be created,
 *				file can not be written, write “fails”
 *				filename is NULL
*/
int create_file(const char *filename, char *text_content)
{
	int f, w;
	size_t cnt;

	cnt = strlen(text_content);

	if (filename == NULL)/* checked */
		return (-1);

	f = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	w = write(f, text_content, cnt);

	if (f == -1 || w == -1)
	{
		return (-1);
	}

	close(f);
	return (1);
}