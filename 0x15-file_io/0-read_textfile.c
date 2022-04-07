#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * @letters: Size of letters
 * @filename: Const type char
 * Return: Success!
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);
	wr = write(1, buffer, rd);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}
