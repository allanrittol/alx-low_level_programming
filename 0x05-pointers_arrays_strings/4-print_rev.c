#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: char
 * Return: void
 */

void print_rev(char *s) /* s includes the string to be printed*/
{
	int i;
	char c;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');

}
