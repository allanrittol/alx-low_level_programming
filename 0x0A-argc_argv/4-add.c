#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum of positive numbers followed by a new line
 * @argc: calculates the sum of numbers followed by a new line
 * @argv: contains the arrays to be calculated from
 * Return: (1) if scuccessful, if not successful print error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int total = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
