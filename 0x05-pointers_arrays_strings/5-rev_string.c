#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: char
 * Return: string
 **/

void rev_string(char *s)
{
	int i = 0;
	int j;
	char a;
	char b;

	while (s[i] != '\0')
	{
		i++;
	}
		i--;
	for (j = 0; j < i; j++)
	{
		a = s[j];
		b = s[i];
		s[j] = a;
		s[i] = b;
		i--;
	}
}
