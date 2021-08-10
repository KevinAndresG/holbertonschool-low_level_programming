#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the
 * @filename: A constant char
 * @letters: a size_t
 * Return: a ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numletters = 0;
	char *buffer = NULL;
	int fd = 0, reader = 0;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	reader = read(fd, buffer, letters);

	if (reader == -1)
	{
		return (0);
	}

	numletters = write(STDOUT_FILENO, buffer, reader);
	free(buffer);
	close(fd);
	return (numletters);
}
