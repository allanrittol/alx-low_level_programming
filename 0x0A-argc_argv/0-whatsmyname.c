#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: number of the command line arguments
 * @argv: array that contains the command line arg
 * Return: (0) when success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
