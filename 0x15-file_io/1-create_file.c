#include "main.h"

/**
 * create_file - Function that create a file
 * @filename: Filename const type char
 * @text_content: Text inside filename ready to read
 * Return: Success! or 1, also -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY, O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	return (1);
}
