#include "main.h"
#define ERR_MSG "Error"
/**
 * is_digit - function that contains a non-digit char
 * @mul: result of multiplication
 * @num1: value 1
 * @num2: value 2
 * Return: (0) success
 */
int is_digit(char *s)
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

