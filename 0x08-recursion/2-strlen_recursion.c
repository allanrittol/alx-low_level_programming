#include "main.h"

/**
 * _strlen_recursion- function that returns the length of a string
 * @s: string to be printed
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)

	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
