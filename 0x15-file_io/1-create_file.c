#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of file
 *
 * Return: 1 on success and -1 on fail
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _strlen;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);


	for (_strlen = 0; text_content[_strlen]; _strlen++)
		;/*find the length for write arrgument*/

	write(fd, text_content, _strlen);
	close(fd);

	return (1);


}
