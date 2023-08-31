#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of a single operation
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, res = 0;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(num1, num2);
	printf("%d\n", res);
	return (0);

}
