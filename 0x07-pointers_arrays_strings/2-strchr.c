#include "main.h"

/**
 * _strchr- locates a character in a string
 * @c: occurence of first char
 * @s: string
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);

}

