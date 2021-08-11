#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: is a constant char
 * @text_content: a char
 * Return: an int
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, wr = 0;
	int fd = 0;
	char *buffer = NULL;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (-1);
	}
	for (; text_content[i] != '\0'; i++)
	{
	}
	buffer = malloc(sizeof(char) * i);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, buffer, i);
	if (wr == -1)
	{
		return (-1);
	}
	free(buffer);
	close(fd);
	return (1);
}
