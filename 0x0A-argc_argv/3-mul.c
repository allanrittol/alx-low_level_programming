#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the nuktiplication of two numbers
 * @argc: calcualtes the numbers to be multipplied
 * @argv: contains the arrrays
 * Return: (1) if successfully returns an error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
