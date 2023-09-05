#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads text and prints to posix stdout
 * @filename: contains the string to be read
 * @letters: contains the numbers of the string size
 *
 * Return: acutal number and prints 0 when it fails returns NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *size = malloc(sizeof(char *) * letters);

	if (!size)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	rd = read(fd, size, letters);
	write(STDOUT_FILENO, size, rd);
}
