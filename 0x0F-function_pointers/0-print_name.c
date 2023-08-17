#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: string name to be printed
 * @f: pointer to print the name
 *
 * Return: (0) success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
