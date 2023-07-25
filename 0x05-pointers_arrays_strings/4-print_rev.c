#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s - string to be printed
 * Return: void
 */

void print_rev(char *s) /* s includes the string to be printed*/
{
	int i;

	for (i; s[i] != '\0'; i--)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
