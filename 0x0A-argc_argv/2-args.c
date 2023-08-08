#include <stdio.h>

/**
 * main - prints the arguments received
 * @argc: number of command line argument
 * @argv: array that contains the program command line
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
