#include "main.h"
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t cont, w_write;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	cont = read(fd, buf, letters);
	if (cont < 0)
	{
		free(buf);
		return (0);
	}
	w_write = write(STDOUT_FILENO, buf, cont);
	if (w_write < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (cont);
}

