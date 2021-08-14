#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: a constant char
 * @text_content: a char pointer
 * Return: an int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(fd, text_content, i);

		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
