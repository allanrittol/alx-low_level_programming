#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function allocates the 1024 bytes to the buffer created
 * @file: contains the buffer name string
 *
 * Return: pointer to the newly created buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"ERROR: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - function closes the descriptors of the file
 * @fd: file descriptor being closed
 *
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"ERROR: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function copies the content for another file
 * @argc: the number of arguments supplied
 * @argv: an array of the pointers of the args supplied
 * close_file - closes the buufer if condition is met
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int from, to, r, w;

	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"ERROR:Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"ERROR: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
