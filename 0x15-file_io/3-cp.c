#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 1024
/**
* main - copies the content of one file to another
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0
**/

int main(int argc, char **argv)
{
	int fd, fd1, src0, src1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	fd1 = open(argv[1], O_RDONLY);
	error_98(fd1, buffer, argv[1]);
	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(fd, buffer, argv[2]);
	do {
		src0 = read(fd1, buffer, BUF_SIZE);
		if (src0 == 0)
			break;
		error_98(src0, buffer, argv[1]);
		src1 = write(fd, buffer, src0);
		error_99(src1, buffer, argv[2]);
	} while (src1 >= BUF_SIZE);
	src0 = close(fd);
	error_100(src0, buffer);
	src0 = close(fd1);
	error_100(src0, buffer);
	free(buffer);
	return (0);
}

/**
* error_98 - checks error 98
* @fd: the value to check
* @buffer: the buffer
* @argv: argument
**/
void error_98(int fd, char *buffer, char *argv)
{

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
* error_99 - checks error 99
* @fd: value to check
* @buffer: the buffer to be read from
* @argv: argument
*/
void error_99(int fd, char *buffer, char *argv)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_100 - checks error 100
* @fd: the value to check
* @buffer: the buffer
*/
void error_100(int fd, char *buffer)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		free(buffer);
		exit(100);
	}
}
