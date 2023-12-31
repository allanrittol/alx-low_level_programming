#include "main.h"
#include <stdlib.h>
/**
 * create_file - a function that creates a file
 * @filename: is the name of string
 * @text_content: is a pointer to a string
 *
 * Return: 1 if successful and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
		return (1);
}
