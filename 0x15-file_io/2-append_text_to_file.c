#include "main.h"

/**
 * append_text_to_file - function that creates a file.
 * @filename: relative path to the file or the name of it.
 * @text_content: text that er will write to our file
 *
 * Return: 1 on success,
 *			-1 on: file can not be created,
 *				file can not be written, write “fails”
 *				filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, cnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (; text_content[cnt];)
			cnt++;

	o = open(text_content, O_APPEND | O_RDWR);
	if (o == -1)
		return (-1);
		
	w = write(o, text_content, cnt);
	if (w == -1)
		return (-1);

	close(o);
	return (1);
}
