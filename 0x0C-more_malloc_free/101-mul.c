#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"

/**
 * find_len - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int find_len(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
/**
 * create_array - creates array of chars and
 *		initializes it with char x adding to terminating null byte
 * @size: size of array to be initialized
 *
 * Return: a pointer to the array
 */
char *create_array(int size)
{
	int index;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}
/**
 * iterate_zeroes - function iterates through a string of numbers containing
 *		leading zeroes until it hits a non-zero number
 * @str: the string of the numbers to be itereated through
 *
 * Return: a pointer to the next non-zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}
/**
 * get_digit - converts a digit to the corresponding integer
 * @c: character to be converted
 *
 * Return: converted int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}
/**
 * get_prod - function that multiplies string of single digit no's
 * @prod: buffer to store the result
 * @mult: the string of numbers
 * @digit: the single digit
 * @zeroes: necessary nummbers leading to zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n")
				exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10
	}

	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_num - function that adds two strings
 * @final_prod: buffer storage for product
 * @next_prod: the next product to be addded
 * @next_len: length of string
 */
void add_num(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - multiplies two digits
 * @argv: the number of args passed to the program
 * @argc: an array of pointers to the args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argc[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(arg[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_array(size + 1);
	next_prod = create_array(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
