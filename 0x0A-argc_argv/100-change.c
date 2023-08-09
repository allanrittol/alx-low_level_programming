#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of command line arguments
 * @argv: array that holds the command libe argument
 * Return: (0) when successful
 */
int main(int argc, char **argv)
{
	int cents;
	int minc = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 1)
			cents -= 1;
		minc += 1;
	}
	printf("%d\n", minc);
	return (0);
}
