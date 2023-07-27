#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to upper case
 * @n: pointer
 * @char: pointer
 * Return: n
 */

char *string_toupper(char *)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	i++;
	}
	return (n);
}
