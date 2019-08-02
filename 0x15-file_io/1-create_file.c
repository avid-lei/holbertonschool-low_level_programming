#include "holberton.h"

/**
 * create_file-create a file
 * @filename: const char
 * @text_content: char
 * Return:int
 */

int create_file(const char *filename, char *text_content)
{

	int fd;
	int len;
	int x;

	if (!filename)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
		return (1);

	if (fd == -1)
		return (-1);


	x = write(fd, text_content, len);

	if (x == -1)
		return (-1);

	close(fd);
	return (1);



}
