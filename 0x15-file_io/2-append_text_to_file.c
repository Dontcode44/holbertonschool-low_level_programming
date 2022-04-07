#include "main.h"

/**
 * append_text_to_file -
 * @text_content: Content by filename
 * @filename: Name of the file to test
 * Return: Success! or -1, else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	return (1);
}
